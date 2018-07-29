/*
** my_is_prime.c for my_is_prime in /home/denizo_r/rendu/J5/Piscine_C_J05
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Fri Oct  2 13:33:22 2015 romain denizot
** Last update Tue Oct 13 19:39:54 2015 romain denizot
*/

int	my_is_prime(int nb)
{
  int	i;
  int	nb2;

  if (nb < 2)
    return (0);
  i = 2;
  nb2 = nb;
  while (i <= nb2)
    {
      nb2 = nb / i;
      if (nb % i == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}
