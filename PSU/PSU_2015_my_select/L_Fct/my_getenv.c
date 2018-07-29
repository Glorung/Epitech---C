/*
** my_getenv.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:50:24 2015 Vincent Gendron
** Last update Thu Nov 26 16:24:03 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "termios.h"
#include "fct.h"

char	*my_getenv(char **env)
{
  int	i;
  int	j;
  char	*str;

  i = 0;
  j = -1;
  while (env[i])
    {
      if (my_strcmp(env[i], "TERM=") != -1)
	j = i;
      i = i + 1;
    }
  if (j == -1)
    exit (-1);
  i = 0;
  str = malloc(sizeof(char) * (str_length(env[j])));
  if (str == NULL)
    return (0);
  while (env[j][i + 5])
    {
      str[i] = env[j][i + 5];
      i = i + 1;
    }
  str[i] = 0;
  return (str);
}
