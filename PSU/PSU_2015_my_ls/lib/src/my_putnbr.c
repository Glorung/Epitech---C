/*
** my_putnbr.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:07:41 2015 Vincent Gendron
** Last update Sat Nov 21 12:18:23 2015 Vincent Gendron
*/

int		my_putnbr_check(int *nb)
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

int		my_putnbr(int nb)
{
  if (my_putnbr_check(&nb))
    {
      if (nb / 10 != 0)
	my_putnbr(nb / 10);
      my_putchar((nb % 10) + '0');
    }
}
