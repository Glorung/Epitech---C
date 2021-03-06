/*
** my_is_prime.c for is prime in /home/gendro_v/Piscine_C_J05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Oct  3 20:15:42 2015 Vincent Gendron
** Last update Mon Oct  5 20:20:59 2015 Vincent Gendron
*/

int		mis_prime(int nb)
{
  int		i;

  i = 2;
  if (nb == 1)
    return (1);
  if (nb <= 0)
    return (0);
  while (nb % i != 0 && i != nb)
    i = i + 1;
  if (i == nb)
    return (1);
  else
    return (0);
}

int		my_is_prime_sup(int nb)
{
  int		i;

  i = nb;
  if (nb <= 1)
    return (nb);
  if (mis_prime(i) == 1)
    return (i);
  while (mis_prime(i) != 1)
    i = i + 1;
  return (i);
}
