/*
** get_env_name.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:42:31 2015 Vincent Gendron
** Last update Sun Dec  6 21:37:16 2015 Vincent Gendron
*/

#include	"list.h"
#include	"my.h"

char		*get_env_name(char **env, int x)
{
  int		i;
  char		*name;

  i = -1;
  while (env[x][++i] != '=');
  name = my_malloc(sizeof(char) * (i + 1));
  i = 0;
  while (env[x][i] != '=')
    {
      name[i] = env[x][i];
      i = i + 1;
    }
  name[i] = '\0';
  return (name);
}
