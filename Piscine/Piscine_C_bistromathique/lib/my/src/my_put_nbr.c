/*
** my_put_nbr.c for my_put_nbr in /home/parria_m/rendu/Piscine_C_J03
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Sep 30 13:25:47 2015 Maxime Parriaux
** Last update Thu Oct  8 01:41:02 2015 Maxime Parriaux
*/

int	my_debug()
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

int	my_put_nbr(int nb)
{
  if (nb == - 2147483648)
    {
      my_debug();
      return (0);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (- 1);
    }
  if (nb / 10 >= 1)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar((nb % 10) + '0');
  return (0);
}
