/*
** my_put_in_env.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:44:28 2015 Vincent Gendron
** Last update Sun Dec  6 21:40:06 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

void		my_put_in_env(t_env **list, char *name, char *value)
{
  t_env		*tmp;
  t_env		*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    {
      my_putstr("shell: Malloc error.\n");
      exit(EXIT_FAILURE);
    }
  elem->name = name;
  elem->value = value;
  if (*list == NULL)
    {
      *list = elem;
      elem->next = NULL;
    }
  else
    {
      tmp = (*list);
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
      elem->next = NULL;
    }
}
