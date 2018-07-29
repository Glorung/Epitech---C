/*
** my_putchar.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:02:50 2015 Vincent Gendron
** Last update Sat Nov 21 12:02:52 2015 Vincent Gendron
*/

#include <unistd.h>
#include "libmy.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
