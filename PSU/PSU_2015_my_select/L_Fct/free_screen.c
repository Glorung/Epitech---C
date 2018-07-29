/*
** free_screen.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:49:21 2015 Vincent Gendron
** Last update Fri Nov 27 15:47:16 2015 Vincent Gendron
*/

#include	<curses.h>
#include <termios.h>
#include <term.h>
#include <stdlib.h>
#include "fct.h"

int	free_screen()
{
  char	*result;

  if ((result = tgetstr("cl", NULL)) == NULL)
    return (-1);
  if (tputs(result, 1, my_putchint) == -1)
    return (-1);
  return (0);
}
