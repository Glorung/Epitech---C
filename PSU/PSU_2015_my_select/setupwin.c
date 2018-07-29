/*
** setupwin.c for my_select in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Nov 27 15:52:15 2015 Vincent Gendron
** Last update Sun Nov 29 22:56:57 2015 Vincent Gendron
*/

#include		<termios.h>
#include		<curses.h>
#include		<stdlib.h>
#include		"list.h"
#include		"fct.h"
#include		"main.h"

void			setup_maxsize(t_list **list, t_winconfig *config)
{
  t_list		*tmp;

  tmp = *list;
  while (tmp != NULL)
    {
      if (my_strlen(tmp->name) > config->max_size)
	config->max_size = my_strlen(tmp->name);
      tmp = tmp->next;
    }
}

void		repair(t_list	**list)
{
  t_list	*tmp;
  t_list	*tmp2;
  int		begin;

  tmp = *list;
  tmp2 = NULL;
  begin = 0;
  while (tmp != NULL)
    {
      if (tmp->y == 0)
	{
	  if (begin == 0)
	    {
	      tmp->y = tmp2->y + 1;
	      begin = 1;
	    }
	  else
	    tmp->y = tmp2->y;
	}
      tmp2 = tmp;
      tmp = tmp->next;
    }
}

void		setup_win_suite(t_list **list, t_winconfig *config)
{
  t_list	*tmp;

  config->line_nbr = config->term_line_nbr;
  tmp = *list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  config->column_nbr = tmp->y;
  repair(list);
}

void			setup_win(t_list **list, t_winconfig *c,
				  struct termios *save)
{
  t_list		*tmp;
  int			tmp_x;
  int			y;

  windowconfig(c);
  setup_maxsize(list, c);
  y = c->term_col_nbr;
  tmp = *list;
  while (tmp != NULL && y > c->max_size)
    {
      tmp_x = c->term_line_nbr;
      y = y - c->max_size - 1;
      while (tmp_x != 0 && tmp != NULL)
	{
	  tmp->x = c->term_line_nbr - tmp_x;
	  if (y != 0 && (c->max_size + 1) != 0 && (y / (c->max_size + 1 != 0)))
	    tmp->y = c->term_col_nbr % y / (c->max_size + 1);
	  else
	    raw_mode_end(save);
	  tmp_x = tmp_x - 1;
	  tmp = tmp->next;
	}
    }
  y < c->max_size ? raw_mode_end(save) : 0;
  setup_win_suite(list, c);
}
