/*
** my_isneg.c for my_isneg in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 09:32:57 2015 Vincent Gendron
** Last update Mon Oct 12 11:19:59 2015 Vincent Gendron
*/

#include	<unistd.h>

void 		my_isneg(int n)
{
  if (n < 0)
    write(1, "N\n", 2);
  else
    write(1, "P\n", 2);
}
