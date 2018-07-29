/*
** ls.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:12:47 2015 Vincent Gendron
** Last update Sun Nov 22 23:12:52 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include "libmy.h"
#include "main.h"

t_list		*next_elem_ls(t_list **list, t_list *tmp, t_param *param)
{
  t_list	*return_v;

  if (param->option_r == 1)
    {
      return_v = *list;
      if (tmp == NULL)
	while (return_v->next != NULL)
	  return_v = return_v->next;
      else if (tmp == *list)
	return (NULL);
      else
	while (return_v->next != tmp)
	  return_v = return_v->next;
    }
  else
    {
      if (tmp == NULL)
	{
	  return_v = *list;
	  return (return_v);
	}
      return_v = tmp->next;
    }
  return (return_v);
}

void		display_ls(t_list **list, t_param *param)
{
  t_list	*tmp;

  tmp = NULL;
  while ((tmp = next_elem_ls(list, tmp, param)) != NULL)
    {
      if ((tmp->name[0] != '.' || param->option_a == 1))
	{
	  my_putstr(tmp->name);
	  my_putchar('\n');
	}
      if (param->option_l == 1 && (tmp->name[0] != '.' ||
				   param->option_a == 1))
	{
	  get_type(param->path, tmp->name);
	  get_right(param->path, tmp->name);
	  get_link(param->path, tmp->name);
	  get_name(param->path, tmp->name);
	  get_group(param->path, tmp->name);
	  get_size(param->path, tmp->name);
	  get_date(param->path, tmp->name);
	}
    }
}

void		ls(t_param *param)
{
  DIR		*dirp;
  t_list	*list;
  struct dirent *file;

  list = NULL;
  if ((dirp = opendir(param->path)) == NULL)
    error(2, param->path);
  while ((file = readdir(dirp)) != NULL)
    my_put_front(&list, file->d_name);
  tri_list(&list);
  display_ls(&list, param);
  if (param->option_r_maj == 1)
    ls_r(list, param);
  free_list(&list);
  free(dirp);
}

void		ls_r(t_list *list, t_param *param)
{
  char		*str;
  char		*str2;
  t_param	new_param;

  new_param = *param;
  while (list != NULL)
    {
      if (check_type(param->path, list->name))
	{
	  if (param->path[0] != '/')
	    str = str_copy(param->path, "/");
	  else
	    str = my_strdup(param->path);
	  str2 = str_copy(str, list->name);
	  free(str);
	  my_putchar('\n');
	  my_putstr(str2);
	  my_putstr(":\n");
	  new_param.path = str2;
	  ls(&new_param);
	  free(str2);
	}
      list = list->next;
    }
}
