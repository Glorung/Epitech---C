/*
** my_putstr.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:29:36 2015 Vincent Gendron
** Last update Mon Nov 16 21:29:37 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<stdarg.h>
#include	"my.h"

void		my_putstr(char *str)
{
  int		i;

  if (str == NULL)
    my_putstr("(NULL)");
  i = 0;
  while (str[i])
    i = i + 1;
  write(1, str, i);
}
