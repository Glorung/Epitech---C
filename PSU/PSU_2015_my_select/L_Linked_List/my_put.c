/*
** my_put.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Linked_List
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:51:38 2015 Vincent Gendron
** Last update Thu Nov 26 15:51:40 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "list.h"

void		my_put_front(t_list **list, char *name)
{
  t_list	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    exit (-1);
  elem->name = name;
  elem->next = *list;
  *list = elem;
}

void		my_put_back(t_list **list, char	*name)
{
  t_list	*tmp;
  t_list	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
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
