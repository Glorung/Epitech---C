/*
** get_env_value.c for miinishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:43:30 2015 Vincent Gendron
** Last update Sun Dec  6 21:36:24 2015 Vincent Gendron
*/

#include	"list.h"
#include	"my.h"

char		*get_env_value(char **env, int x)
{
  int		i;
  int		stock;
  char		*value;

  i = 0;
  while (env[x][i++] != '=');
  stock = i;
  while (env[x][i++] != '\0');
  value = my_malloc(sizeof(char) * (i - stock + 1));
  i = 0;
  while (env[x][stock])
    value[i++] = env[x][stock++];
  value[i] = '\0';
  return (value);
}
