/*
** setenv.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src/build
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 18:29:03 2015 Vincent Gendron
** Last update Tue Dec 15 15:54:35 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"build.h"
#include	"my.h"

int		check_env(t_env **list, char *str)
{
  t_env		*tmp;

  tmp = *list;
  while (tmp != NULL)
    {
      if (my_strcmp(tmp->name, str) == 0)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}

void		build_setenv(t_env **list, char **cmd)
{
  if (cmd[2] != NULL)
    {
      if (check_env(list, cmd[1]))
	build_unsetenv(list, cmd);
      my_put_in_env(list, my_strdup(cmd[1]), my_strdup(cmd[2]));
    }
}
