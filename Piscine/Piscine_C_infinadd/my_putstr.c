/*
** my_putstr.c for putstr in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 20 17:15:07 2015 Vincent Gendron
** Last update Tue Oct 20 17:56:45 2015 Vincent Gendron
*/

#include	<unistd.h>

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i = i + 1;
  write(1, str, i);
}
