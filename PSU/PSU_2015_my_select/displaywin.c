/*
** displaywin.c for displaywin in /home/gendro_v/PSU_2015_my_select
**
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
**
** Started on  Thu Nov 26 13:59:45 2015 Vincent Gendron
** Last update Sun Nov 29 22:05:18 2015 Vincent Gendron
*/

#include	<termios.h>
#include	<curses.h>
#include	<stdlib.h>
#include	"list.h"
#include	"fct.h"
#include	"main.h"

void		my_displaywin(t_list *ptr, t_winconfig *config)
{
  int		len;

  len = my_strlen(ptr->name);
  if (ptr->selected == 0 && ptr->choosen == 0)
    my_aff_custom(ptr->name, 0);
  else if (ptr->selected == 1 && ptr->choosen == 0)
    my_aff_custom(ptr->name, 1);
  else if (ptr->selected == 1 && ptr->choosen == 1)
    my_aff_custom(ptr->name, 3);
  else if (ptr->selected == 0 && ptr->choosen == 1)
    my_aff_custom(ptr->name, 2);
  while (len != config->max_size + 1)
    {
      my_putchint(' ');
      len = len + 1;
    }
}

void		displaywin(t_list **list, t_winconfig *config)
{
  t_list	*tmp;
  int		x;

  free_screen();
  x = 0;
  while (x != config->line_nbr)
    {
      tmp = *list;
      while (tmp != NULL)
	{
	  if (tmp->x == x)
	    {
	      my_displaywin(tmp, config);
	    }
	  tmp = tmp->next;
	}
      my_putstr("\n");
      x = x + 1;
    }
}
