/*
** my_put_nbr.c for my_put_nbr in /home/denizo_r/rendu/Piscine_C_J07/lib/my
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct  7 21:37:14 2015 romain denizot
** Last update Mon Oct 12 22:49:49 2015 romain denizot
*/

int	my_put_nbr(int nb)
{
  int	val;
  int	n;
  int	nb2;

  val = -1;
  n = 8;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  nb2 = nb;
  while (n > 0)
    {
      if (my_power_rec(10, n) < nb2)
	{
	  val = nb / my_power_rec(10, n);
	  my_putchar(val + '0');
 	  nb = nb - val * my_power_rec(10, n);
	}
      n = n - 1;
    }
  my_putchar(nb + '0');
  return (0);
}
