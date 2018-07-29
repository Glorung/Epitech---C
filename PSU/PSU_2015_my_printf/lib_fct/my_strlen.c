/*
** my_strlen.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:30:24 2015 Vincent Gendron
** Last update Mon Nov 16 21:30:25 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

int		my_strlen(char *str)
{
  int		i;

  if (str == NULL)
    return (0);
  i = -1;
  while (str[++i]);
  return (i);
}
