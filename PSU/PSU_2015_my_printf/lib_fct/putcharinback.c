/*
** putcharinback.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:30:54 2015 Vincent Gendron
** Last update Mon Nov 16 21:30:58 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*putcharinback(char *str, char c)
{
  char		*return_v;
  int		i;

  return_v = NULL;
  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * (my_strlen(str) + 2))) == NULL)
    return (NULL);
  i = -1;
  while (str[++i])
    return_v[i] = str[i];
  free(str);
  return_v[i] = c;
  return_v[i + 1] = '\0';
  return (return_v);
}
