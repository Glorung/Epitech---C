/*
** my_putstr.c for lib in /home/gendro_v/rendu/piscine/Piscine_C_J10/lib/my/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 12 10:59:25 2015 Vincent Gendron
** Last update Mon Oct 12 11:01:20 2015 Vincent Gendron
*/

#include	<unistd.h>

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      i = i + 1;
    }
  write(1, str, i);
}
