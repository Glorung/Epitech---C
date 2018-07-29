/*
** putstrinback.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:32:24 2015 Vincent Gendron
** Last update Mon Nov 16 21:32:26 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*putstrinback(char *return_v, char *str)
{
  char		*new;
  int		i;
  int		j;

  new = NULL;
  if (str == NULL)
    return (my_strdup(return_v));
  if (return_v == NULL)
    return (my_strdup(str));
  if ((new = malloc(sizeof(char) *
		    (my_strlen(return_v) + my_strlen(str) + 1))) == NULL)
    return (NULL);
  i = -1;
  while (return_v[++i])
    new[i] = return_v[i];
  j = -1;
  while (str[++j])
    new[i++] = str[j];
  new[i] = '\0';
  free(str);
  return (new);
}
