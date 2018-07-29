/*
** tri_list.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 22:12:41 2015 Vincent Gendron
** Last update Sat Nov 21 22:45:55 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"libmy.h"

void		swap_elem_list(t_list **first, t_list **second)
{
  t_list  tmp;

  tmp.name = (*first)->name;
  (*first)->name = (*second)->name;
  (*second)->name = tmp.name;
}

t_list		*tri_list(t_list **list)
{
  int		tri;
  t_list	*tmp;

  tri = 1;
  while (tri == 1)
    {
      tmp = *list;
      tri = 0;
      while (tmp->next != NULL)
	{
	  if (my_strcmp(tmp->name, tmp->next->name) > 0)
	    {
	      swap_elem_list(&tmp, &(tmp->next));
	      tri = 1;
	    }
	  tmp = tmp->next;
	}
    }
}
