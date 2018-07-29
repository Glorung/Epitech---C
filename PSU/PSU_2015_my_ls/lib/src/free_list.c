/*
** free_list.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:02:01 2015 Vincent Gendron
** Last update Sat Nov 21 12:02:06 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "libmy.h"

void		free_list(t_list **list)
{
  t_list	*tmp;

  while ((*list) != NULL)
    {
      tmp = (*list)->next;
      free(*list);
      *list = tmp;
    }
}
