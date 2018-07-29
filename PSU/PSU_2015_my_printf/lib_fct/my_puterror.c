/*
** my_puterror.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:29:10 2015 Vincent Gendron
** Last update Mon Nov 16 21:29:13 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

char		*puterror(char *error_code)
{
  write(2, error_code, my_strlen(error_code));
  return (NULL);
}
