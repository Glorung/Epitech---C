/*
** my_rev_list.c for J!! in /home/gendro_v/rendu/piscine/Piscine_C_J11/ex_03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 13 09:35:13 2015 Vincent Gendron
** Last update Tue Oct 13 21:47:40 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"mylist.h"

int		my_rev_list(t_list **begin)
{
  t_list	*new;
  t_list	*tmp;
  t_list	*tcm;
  t_list	*tmp2;

  tmp = *begin;
  while (tmp->next != NULL && tmp == (tmp = tmp->next))
    tcm = (tmp->next != NULL) ? tmp : tcm;
  new = tmp;
  tmp2 = tmp;
  tmp = NULL;
  tcm->next = NULL;
  while ((*begin)->next != NULL)
    {
      tmp = *begin;
      tcm = *begin;
      while (tmp->next != NULL && tmp == (tmp = tmp->next))
	  tcm = (tmp->next != NULL) ? tmp : tcm;
      tcm->next = NULL;
      tmp2->next = tmp;
      tmp2 = tmp2->next;
    }
  tmp2->next = *begin;
  *begin = new;
}
