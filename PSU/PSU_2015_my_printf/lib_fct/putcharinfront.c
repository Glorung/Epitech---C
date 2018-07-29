/*
** putcharinfront.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:32:06 2015 Vincent Gendron
** Last update Mon Nov 16 21:32:08 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"include/my.h"

char		*putcharinfront(char *str, char c)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
    return (NULL);
  return_v[0] = c;
  i = 1;
  while (str[i - 1])
    {
      return_v[i] = str[i - 1];
      i = i + 1;
    }
  free(str);
  return_v[i] = '\0';
  return (return_v);
}
