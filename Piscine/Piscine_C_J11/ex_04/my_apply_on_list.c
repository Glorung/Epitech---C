/*
** my_apply_on_list.c for lol in /home/gendro_v/rendu/piscine/Piscine_C_J11/ex_04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 13 17:19:06 2015 Vincent Gendron
** Last update Tue Oct 13 21:48:19 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"mylist.h"

int		my_apply_on_list(t_list *begin, int (*f)(void*))
{
  while (begin != NULL)
    {
      f(begin->data);
      begin = begin->next;
    }
}
