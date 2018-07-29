/*
** my_find_next_prime.c for my_next_prime in /home/denizo_r/rendu/Piscine_C_J05/Piscine_C_J05
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Sat Oct  3 15:53:36 2015 romain denizot
** Last update Sat Oct  3 22:55:19 2015 romain denizot
*/

int	my_find_next_prime(int nb)
{
  int	i;

  i = 0;
  while (1)
    {
      if (my_is_prime(nb + i) == 1)
	return (nb + i);
      i = i + 1;
    }
  return (0);
}
