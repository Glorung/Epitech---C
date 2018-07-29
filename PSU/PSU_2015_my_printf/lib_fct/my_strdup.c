/*
** my_strdup.c for my_putstr in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:29:59 2015 Vincent Gendron
** Last update Mon Nov 16 21:30:00 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*my_strdup(char *str)
{
  char		*new;
  int		i;

  if ((new = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  i = -1;
  while (str[++i])
    new[i] = str[i];
  new[i] = str[i];
  return (new);
}
