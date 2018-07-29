/*
** my_is_prime.c for my_is_prime in /home/parria_m/rendu/Piscine_C_J05
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Fri Oct  2 13:20:22 2015 Maxime Parriaux
** Last update Sat Oct  3 22:57:55 2015 Maxime Parriaux
*/

int	my_is_prime(int nb)
{
  int	i;
  int	multi;

  if (nb < 2)
    return (0);
  if (nb == 2)
    return (1);
  i = nb;
  multi = 1;
  while (i > multi)
    {
      multi = multi + 1;
      i = nb / multi;
      if (nb % multi == 0)
	return (0);
    }
  return (1);
}
