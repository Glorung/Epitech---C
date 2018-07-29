/*
** flag_eleventosixteen.c for my_printf in /home/gendro_v/PSU_2015_my_printf/flags
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:34:12 2015 Vincent Gendron
** Last update Mon Nov 16 21:34:13 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*flag_c(va_list args)
{
  char		*str;

  str = NULL;
  str = putcharinback(str, (char)va_arg(args, int));
  return (str);
}

char		*flag_s(va_list args)
{
  char		*str;

  str = va_arg(args, char *);
  if (str == NULL)
    return (my_strdup("(null)"));
  str = my_strdup(str);
  return (str);
}

char		*flag_p(va_list args)
{
  char		*str;
  unsigned long	*ptr;

  ptr = va_arg(args, unsigned long *);
  if (ptr == NULL)
    return (my_strdup("(nil)"));
  str = longtobase((unsigned long)(ptr), "0123456789abcdef");
  str = putcharinfront(str, 'x');
  str = putcharinfront(str, '0');
  return (str);
}

char		*flag_percent(va_list args)
{
  return (putcharinback(NULL, '%'));
}

char		*flag_b(va_list args)
{
  char		*str;
  unsigned int	nb;

  nb = va_arg(args, int);
  str = uinttobase(nb, "01");
  return (str);
}
