/*
** build.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 18:03:06 2015 Vincent Gendron
** Last update Sun Dec  6 21:00:08 2015 Vincent Gendron
*/

#include	"list.h"
#include	"build.h"
#include	"my.h"

int		check_build(char *cmd)
{
  if (my_strcmp(cmd, "cd") == 0);
  else if (my_strcmp(cmd, "setenv") == 0);
  else if (my_strcmp(cmd, "unsetenv") == 0);
  else if (my_strcmp(cmd, "exit") == 0);
  else if (my_strcmp(cmd, "env") == 0);
  else
    return (0);
  return (1);
}

void		build(t_env **list, char **cmd)
{
  if (my_strcmp(cmd[0], "cd") == 0)
    build_cd(list, cmd);
  else if (my_strcmp(cmd[0], "setenv") == 0)
    build_setenv(list, cmd);
  else if (my_strcmp(cmd[0], "unsetenv") == 0)
    build_unsetenv(list, cmd);
  else if (my_strcmp(cmd[0], "exit") == 0)
    build_exit(list, cmd);
  else if (my_strcmp(cmd[0], "env") == 0)
    build_env(list, cmd);
}
