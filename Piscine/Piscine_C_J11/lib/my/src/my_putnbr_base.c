/*
** my_putnbr_base.c for putnbr in /home/gendro_v/rendu/piscine/Piscine_C_J06
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 20:42:14 2015 Vincent Gendron
** Last update Mon Oct 12 20:55:29 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	"my.h"

void		my_putnbr_base(int nbr, char *base)
{
  int		len_base;

  if (nbr < 0 && nbr == (nbr = nbr * -1))
    write(1, "-", 1);
  len_base = 0;
  while (base[len_base])
    len_base = len_base + 1;
  if (nbr / len_base != 0)
    my_putnbr_base(nbr / len_base, base);
  my_putchar(base[nbr % len_base]);
}
