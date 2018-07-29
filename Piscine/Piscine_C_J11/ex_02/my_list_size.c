/*
** my_list_size.c for J11 in /home/gendro_v/rendu/piscine/Piscine_C_J11/ex_02
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 13 09:30:50 2015 Vincent Gendron
** Last update Tue Oct 13 21:43:46 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"mylist.h"

int		my_list_size(t_list *begin)
{
  t_list	*tmp;
  int		i;

  tmp = begin;
  i = 0;
  if (begin == NULL)
    return (0);
  else
    i = 1;
  while (tmp != NULL)
    {
      i = i + 1;
      tmp = tmp->next;
    }
}
