/*
** my_put_in_list.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Linked_List
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:51:51 2015 Vincent Gendron
** Last update Thu Nov 26 15:51:52 2015 Vincent Gendron
*/

#include "list.h"

int     my_put_in_list(t_list **list, int argc, char **argv)
{
  int   i;

  i = 1;
  while (i != argc)
    {
      my_put_back(list, argv[i]);
      i = i + 1;
    }
  return (i);
}
