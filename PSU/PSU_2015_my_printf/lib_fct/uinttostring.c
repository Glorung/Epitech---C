/*
** uinttostring.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:33:23 2015 Vincent Gendron
** Last update Mon Nov 16 21:33:27 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*uinttostring(unsigned int nb)
{
  char		*return_v;

  return_v = NULL;
  if (nb / 10 != 0)
    return_v = inttostring(nb / 10);
  return_v = putcharinback(return_v, ((nb % 10) + '0'));
  return (return_v);
}
