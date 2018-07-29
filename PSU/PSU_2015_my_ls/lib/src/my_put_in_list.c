/*
** my_put_in_list.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:03:03 2015 Vincent Gendron
** Last update Sat Nov 21 12:03:04 2015 Vincent Gendron
*/

#include "libmy.h"

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
