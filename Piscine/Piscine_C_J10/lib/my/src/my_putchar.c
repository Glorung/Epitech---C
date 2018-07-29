/*
** my_putchar.c for lib in /home/gendro_v/rendu/piscine/Piscine_C_J10/lib/my/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 12 10:02:20 2015 Vincent Gendron
** Last update Mon Oct 12 11:40:11 2015 Vincent Gendron
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
