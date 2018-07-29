/*
** my_printf.c for my_printf in /home/gendro_v/PSU_2015_my_printf
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:27:38 2015 Vincent Gendron
** Last update Mon Nov 16 21:27:40 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	<stdio.h>
#include	"flags.h"
#include	"my.h"

int		my_printfchartoskip(char *format, char *tab[16])
{
  int		i;

  i = 0;
  while (tab[i] != NULL && compare_flag(format, tab[i]) == 0)
    i = i + 1;
  if (tab[i] == NULL)
    return (0);
  return (my_strlen(tab[i]));
}

char		*exec_flag(char *format, va_list args,
			     char *(*fct[16])(va_list), char *tab[16])
{
  int		i;

  i = 0;
  while (tab[i] != NULL && compare_flag(format, tab[i]) == 0)
    i = i + 1;
  if (tab[i] == NULL)
    return (NULL);
  return (fct[i](args));
}

char		*fillstr_my_printf(char *format, va_list args,
				   char *(*fct[16])(va_list), char **tab)
{
  char		*str[2];

  str[0] = NULL;
  while (format && format[0] != '\0')
    {
      if (format[0] != '%')
	str[0] = putcharinback(str[0], format[0]);
      else
	{
	  str[1] = putstrinback(str[0], exec_flag(format, args, fct, tab));
	  if (str[0] != NULL)
	    free(str[0]);
	  if (my_printfchartoskip(format, tab) == 0)
	    str[1] = putcharinback(str[1], '%');
	  else
	    format = format + (my_printfchartoskip(format, tab) - 1);
	  str[0] = str[1];
	}
      format = format + 1;
    }
  return (str[0]);
}

int		my_printf(const char *format, ...)
{
  va_list	args;
  char		*(*fct[16])(va_list);
  char		**tab;
  char		*str[2];
  int		size;

  size = -1;
  if (format != NULL)
    {
      va_start(args, format);
      tab = NULL;
      tab = define_flag(tab);
      define_fct(fct);
      str[1] = my_strdup((char *)(format));
      str[0] = fillstr_my_printf(str[1], args, fct, tab);
      size = my_strlen(str[0]);
      my_putstr(str[0]);
      free(str[0]);
      free(str[1]);
      free_tab(tab);
      va_end(args);
    }
  return (size);
}
