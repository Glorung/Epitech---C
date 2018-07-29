/*
** fill_env.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:34:53 2015 Vincent Gendron
** Last update Sun Dec  6 21:38:07 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

void		fill_env(t_env **list, char **env)
{
  int		x;
  char		*name;
  char		*value;

  x = 0;
  if (env == NULL)
    my_putstr("shell: Env missing.\n");
  else
    {
      while (env[x] != NULL)
	{
	  name = get_env_name(env, x);
	  value = get_env_value(env, x);
	  my_put_in_env(list, name, value);
	  x = x + 1;
	}
    }
}
