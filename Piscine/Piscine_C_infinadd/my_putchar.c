/*
** my_putchar.c for putchar in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 18:21:03 2015 Vincent Gendron
** Last update Mon Oct 19 18:21:58 2015 Vincent Gendron
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
