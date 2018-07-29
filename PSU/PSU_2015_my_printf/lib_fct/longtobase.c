/*
** longtobase.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:28:25 2015 Vincent Gendron
** Last update Mon Nov 16 21:28:26 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*longtobase(unsigned long nb, char *base)
{
  char		*result;
  long		len_base;

  result = NULL;
  len_base = my_strlen(base);
  if (nb / len_base != 0)
    result = longtobase((unsigned long)((unsigned long)nb /
					(unsigned long)len_base), base);
  result = putcharinback(result, base[(unsigned long)((unsigned long)nb %
						      (unsigned long)len_base)]);
  return (result);
}
