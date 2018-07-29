/*
** uinttobase.c for my_putstr in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:33:00 2015 Vincent Gendron
** Last update Mon Nov 16 21:33:01 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*uinttobase(unsigned int nb, char *base)
{
  char		*result;
  int		len_base;

  result = NULL;
  len_base = my_strlen(base);
  if (nb / len_base != 0)
    result = uinttobase(nb / len_base, base);
  result = putcharinback(result, base[(nb % len_base)]);
  return (result);
}
