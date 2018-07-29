/*
** unsetenv.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src/build
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 18:32:58 2015 Vincent Gendron
** Last update Tue Dec 15 16:15:43 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

void		remove_list(t_env **list, char *name)
{
  t_env		*tmp;
  t_env		*tmp2;

  tmp = *list;
  if (my_strcmp(tmp->name, name) == 0)
    {
      *list = tmp->next;
      free(tmp->name);
      free(tmp);
      return ;
    }
  while (my_strcmp(tmp->name, name) != 0)
    tmp = tmp->next;
  tmp2 = *list;
  while (tmp2->next != tmp)
    tmp2 = tmp2->next;
  tmp2->next = tmp->next;
  free(tmp->name);
  free(tmp);
}

void		build_unsetenv(t_env **list, char **param)
{
  t_env		*tmp;

  if (param[1] != NULL && (tmp = (*list)) == (*list))
    {
      if (check_env(list, param[1]))
	{
	  remove_list(list, param[1]);
	}
      else
	my_putstr("shell: error: Not found\n");
    }
  else
    env(list);
}
