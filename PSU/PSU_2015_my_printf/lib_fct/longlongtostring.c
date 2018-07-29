/*
** longlongtostring.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:28:05 2015 Vincent Gendron
** Last update Mon Nov 16 21:28:06 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*longlongtostring(long long nb)
{
  char		*return_v;
  int		neg;

  neg = 0;
  return_v = NULL;
  if (nb < 0)
    {
      nb = nb * -1;
      neg = 1;
    }
  if (nb / 10 != 0)
    {
      return_v = longlongtostring(nb / 10);
    }
  return_v = putcharinback(return_v, ((nb % 10) + '0'));
  if (neg == 1)
    return_v = putcharinfront(return_v, '-');
  return (return_v);
}
