/*
** env.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src/build
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 18:26:55 2015 Vincent Gendron
** Last update Sun Dec  6 21:47:28 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

void		build_env(t_env **list, char **cmd)
{
  t_env		*tmp;

  tmp = (*list);
  cmd = cmd;
  while (tmp != NULL)
    {
      my_putstr(tmp->name);
      my_putstr("=");
      my_putstr(tmp->value);
      my_putstr("\n");
      tmp = tmp->next;
    }
}
