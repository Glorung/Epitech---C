/*
** my_strlen.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:15:57 2015 Vincent Gendron
** Last update Sat Nov 21 12:15:58 2015 Vincent Gendron
*/

#include "libmy.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i++]);
  return (i);
}
