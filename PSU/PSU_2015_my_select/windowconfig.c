/*
** windowconfig.c for windowconfig in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Nov 27 15:54:39 2015 Vincent Gendron
** Last update Fri Nov 27 17:40:05 2015 Vincent Gendron
*/

#include		<sys/ioctl.h>
#include		<termios.h>
#include		<ncurses.h>
#include		"list.h"
#include		"main.h"

void			windowconfig(t_winconfig *config)
{
  struct winsize	w;

  ioctl(0, TIOCGWINSZ, &w);
  config->term_line_nbr = w.ws_row - 1;
  config->term_col_nbr = w.ws_col - 1;
  config->max_size = 0;
}
