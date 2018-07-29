/*
** switch.c for switch in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 29 20:36:00 2015 Vincent Gendron
** Last update Sun Nov 29 22:58:18 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"fct.h"
#include	"list.h"
#include	"main.h"

t_list		*get_last_elem(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  return (tmp);
}

void		choosen(t_list **list, int x, int y)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp != NULL && (tmp->x != x || tmp->y != y))
    tmp = tmp->next;
  if (tmp == NULL)
    (*list)->choosen = 1;
  else
    tmp->choosen = 1;
}

void		left(t_list **list, t_winconfig *config)
{
  t_list	*tmp;
  int		next_x;
  int		next_y;

  tmp = *list;
  while (tmp->choosen != 1)
    tmp = tmp->next;
  tmp->choosen = 0;
  if (tmp->y == 1)
    {
      if (tmp->x == 0)
	{
	  tmp = get_last_elem(list);
	  tmp->choosen = 1;
	  return ;
	}
      next_y = (get_last_elem(list))->y;
      next_x = tmp->x - 1;
    }
  else
    {
      next_x = tmp->x;
      next_y = tmp->y - 1;
    }
  choosen(list, next_x, next_y);
}

void		right(t_list **list, t_winconfig *config)
{
  t_list	*tmp;
  int		next_x;
  int		next_y;

  tmp = *list;
  while (tmp->choosen != 1)
    tmp = tmp->next;
  tmp->choosen = 0;
  if (tmp->y == (get_last_elem(list))->y && (next_y = 1) == 1)
    {
      if (tmp->x == (get_last_elem(list))->x)
	{
	  tmp = *list;
	  tmp->choosen = 1;
	  return ;
	}
      next_y = 1;
      next_x = tmp->x + 1;
    }
  else
    {
      next_x = tmp->x;
      next_y = tmp->y + 1;
    }
  choosen(list, next_x, next_y);
}
