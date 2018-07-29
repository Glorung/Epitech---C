/*
** my_issame.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:09:12 2015 Vincent Gendron
** Last update Sat Nov 21 12:09:13 2015 Vincent Gendron
*/

#include "libmy.h"

int	my_issame(char *str1, char *str2)
{
  int	i;

  i = 0;
  while (str1[i] && str2[i])
    {
      if (str1[i] == str2[i])
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
