/*
** interface.c for my_select in /home/gendro_v/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:47:28 2015 Vincent Gendron
** Last update Fri Nov 27 15:45:52 2015 Vincent Gendron
*/

#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include "fct.h"
#include "list.h"

void	my_aff_custom(char *str, int format)
{
  if (format == 0)
    my_putstr(str);
  else if (format == 1)
    my_putstr_inv(str);
  else if (format == 2)
    my_putstr_soul(str);
  else if (format == 3)
    my_putstr_combine(str);
}
