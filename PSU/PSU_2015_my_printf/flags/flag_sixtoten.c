/*
** flag_sixtoten.c for my_printf in /home/gendro_v/PSU_2015_my_printf/flags
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:34:42 2015 Vincent Gendron
** Last update Mon Nov 16 21:34:43 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*flag_i(va_list args)
{
  return (inttostring(va_arg(args, int)));
}

char		*flag_o(va_list args)
{
  return (uinttobase(va_arg(args, unsigned int), "01234567"));
}

char		*flag_u(va_list args)
{
  return (uinttostring(va_arg(args, unsigned int)));
}

char		*flag_x(va_list args)
{
  return (uinttobase(va_arg(args, unsigned int), "0123456789abcdef"));
}

char		*flag_xmaj(va_list args)
{
  return (uinttobase(va_arg(args, unsigned int), "0123456789ABCDEF"));
}

