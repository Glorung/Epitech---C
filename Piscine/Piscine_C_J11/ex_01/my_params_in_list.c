/*
** my_params_in_list.c for J11 in /home/gendro_v/rendu/piscine/Piscine_C_J11/ex_01
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 13 09:11:49 2015 Vincent Gendron
** Last update Tue Oct 13 21:25:57 2015 Vincent Gendron
*/

#include		<stdlib.h>
#include		"mylist.h"

t_list		*kaappa(t_list **list, char *str)
{
  t_list	*tmp;

  if ((tmp = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  tmp->data = str;
  if (*list == NULL)
    tmp->next = NULL;
  else
    tmp->next = *list;
  *list = tmp;
}

t_list		*my_params_in_list(int ac, char **av)
{
  t_list	*list;
  int		i;

  list = NULL;
  i = 0;
  while (i < ac)
    {
      kaappa(&list, av[i]);
      i = i + 1;
    }
  return (list);
}
