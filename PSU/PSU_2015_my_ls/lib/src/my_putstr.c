/*
** my_putstr.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:07:59 2015 Vincent Gendron
** Last update Sat Nov 21 12:08:00 2015 Vincent Gendron
*/

#include <unistd.h>
#include "libmy.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i++]);
  write(1, str, i);
}
