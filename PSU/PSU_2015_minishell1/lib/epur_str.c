/*
** epur_str.c for epur_str in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/lib
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 14:53:25 2015 Vincent Gendron
** Last update Sun Dec  6 22:01:41 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "list.h"
#include "my.h"

char	*epur_str(char *str)
{
  int	y;
  int	i;
  char	*res;

  y = 0;
  i = 0;
  while ((str[i] == ' ' || str[i] == '\t') && str[i++]);
  if (str[i] == '\0')
    return (NULL);
  if ((res = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i])
    {
      if (str[i] != ' ' && str[i] != '\t')
	res[y++] = str[i];
      else if (str[i] == ' ' && str[i + 1] != ' ' && str[i])
	res[y++] = ' ';
      i = i + 1;
    }
  free(str);
  if (res[y - 1] == ' ')
    res[y - 1] = '\0';
  else
    res[y] = 0;
  return (res);
}
