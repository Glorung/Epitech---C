/*
** compare_flag.c for my_printf in /home/gendro_v/PSU_2015_my_printf
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:26:28 2015 Vincent Gendron
** Last update Mon Nov 16 21:26:31 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	<stdio.h>
#include	"flags.h"
#include	"my.h"

int		compare_flag(char *format, char *flag)
{
  int		i;

  i = 0;
  while (format[i] != '\0' && flag[i] != '\0')
    {
      if (format[i] != flag[i])
	return (0);
      i = i + 1;
    }
  if (flag[i] == '\0')
    return (1);
  return (0);
}
