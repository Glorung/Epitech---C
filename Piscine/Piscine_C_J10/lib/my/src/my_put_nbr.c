/*
** my_put_nbr.c for my_put_nbr in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 10:23:26 2015 Vincent Gendron
** Last update Mon Oct 12 10:33:15 2015 Vincent Gendron
*/

#include	"my.h"

int		my_put_nbr_check(int *nb)
{
  if (*nb == -2147483648)
    {
      my_putchar('-');
      my_putchar('2');
      my_putchar('1');
      my_putchar('4');
      my_putchar('7');
      my_putchar('4');
      my_putchar('8');
      my_putchar('3');
      my_putchar('6');
      my_putchar('4');
      my_putchar('8');
      return (0);
    }
  else if (*nb < 0)
    {
      my_putchar('-');
      *nb = *nb * -1;
    }
  return (1);
}

void		my_put_nbr(int nb)
{
  if (my_put_nbr_check(&nb))
    {
      if (nb / 10 != 0)
	my_put_nbr(nb / 10);
      my_putchar((nb % 10) + '0');
    }
}
