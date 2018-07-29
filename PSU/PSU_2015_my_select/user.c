/*
** user.c for my_select in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select
**
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
**
** Started on  Fri Nov 27 15:51:59 2015 Vincent Gendron
** Last update Sun Nov 29 22:40:45 2015 Vincent Gendron
*/

#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include "fct.h"
#include "list.h"
#include "main.h"

void	use_key(t_list **list, t_winconfig *config,
		struct termios *save, int key)
{
  if (key == 458965248)
    prev(list);
  else if (key == 458966016)
    left(list, config);
  else if (key == 458965760)
    right(list, config);
  else if (key == 458965504)
    next(list);
  else if (key == 8192)
    selected(list);
  else if (key == 1530101248 || key == 32512)
    del(list, save);
  else if (key == 2560)
    my_report(list, save);
}

void	user_waiting(t_list **list, struct termios *save, t_winconfig *config)
{
  int	key;

  key = 0;
  free_screen();
  displaywin(list, config);
  while ((key = get_key()) != 6912)
    {
      use_key(list, config, save, key);
      if (key == 458965248 || key == 458966016
	  || key == 458965760 || key == 458965504 || key == 8192
	  || key == 1530101248 || key == 32512 || key == 2560)
	{
	  setup_win(list, config, save);
	  displaywin(list, config);
	}
    }
  raw_mode_end(save);
}
