/*
** my_getenv.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:20:29 2015 Vincent Gendron
** Last update Sun Dec  6 22:00:36 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

char		*my_getenv(t_env **list, char *str)
{
  t_env		*tmp;

  tmp = *list;
  while (tmp != NULL)
    {
      if (my_strcmp(tmp->name, str) == 0)
	return (tmp->value);
      tmp = tmp->next;
    }
  return (NULL);
}
