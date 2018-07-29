/*
** flag_onetofive.c for my_printf in /home/gendro_v/PSU_2015_my_printf/flags
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:34:27 2015 Vincent Gendron
** Last update Mon Nov 16 21:34:31 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*flag_z(va_list args)
{
  return (inttostring(va_arg(args, int)));
}

char		*flag_q(va_list args)
{
  char		*str;

  str = NULL;
  str = longlongtostring(va_arg(args, long long));
  return (str);
}

char		*flag_ll(va_list args)
{
 char		*str;
 long long	nbr;

 nbr = va_arg(args, long long int);
 str = NULL;
 str = longlongtostring(nbr);
 return (str);
}

char		*flag_l(va_list args)
{
 char		*str;

  str = NULL;
  str = longtostring(va_arg(args, long));
  return (str);
}

char		*flag_d(va_list args)
{
  return (inttostring(va_arg(args, int)));
}
