/*
** raw_mode.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:50:08 2015 Vincent Gendron
** Last update Fri Nov 27 17:00:02 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include <termios.h>

int	raw_mode(struct termios *t)
{
  int	i;

  t->c_lflag &= ~ECHO;
  t->c_lflag &= ~ICANON;
  t->c_cc[VMIN] = 1;
  t->c_cc[VTIME] = 0;
  if (tcsetattr(0, 0, t) == -1)
    return (1);
  return (0);
}

void	raw_mode_end(struct termios *save)
{
  if (tcsetattr(0, 0, save) == -1)
    exit(EXIT_FAILURE);
  exit(1);
}
