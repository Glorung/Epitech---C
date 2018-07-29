/*
** my_put.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:02:35 2015 Vincent Gendron
** Last update Sat Nov 21 12:02:38 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "libmy.h"

void		my_put_front(t_list **list, char *name)
{
  t_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    exit (-1);
  elem->name = name;
  elem->next = *list;
  *list = elem;
}

void		my_put_back(t_list **list, char	*name)
{
  t_list	*tmp;
  t_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    exit (-1);
  elem->name = name;
  if ((*list) == NULL)
    {
      *list = elem;
      elem->next = NULL;
    }
  else
    {
      tmp = *list;
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
      elem->next = NULL;
    }
}
