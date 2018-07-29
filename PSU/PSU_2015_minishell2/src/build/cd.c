/*
** cd.c for d in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src/build
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 18:17:03 2015 Vincent Gendron
** Last update Sun Dec  6 21:45:53 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"list.h"
#include	"my.h"

void		build_cd_home(t_env **list, char **cmd)
{
  char		*str;

  str = my_getenv(list, "LOGNAME");
  if (str == NULL)
    my_putstr("shell: Env missing\n");
  else
    {
      str = my_strrealloc("/home/", str);
      str = my_strrealloc(str, "/");
      if (chdir(str) == -1)
	{
	  my_putstr("shell: ");
	  my_putstr(cmd[1]);
	  my_putstr("not found\n");
	}
    }
}

void		build_cd(t_env **list, char **cmd)
{
  if (cmd[1] == NULL)
    build_cd_home(list, cmd);
  else
    {
      if (chdir(cmd[1]) == -1)
	{
	  my_putstr("shell: ");
	  my_putstr(cmd[1]);
	  my_putstr("not found\n");
	}
    }
}
