/*
** my_nsqrt.c for my_nsqrt in /home/denizo_r/rendu/Piscine_C_J06/ex_16
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 20:50:45 2015 romain denizot
** Last update Tue Oct  6 15:15:45 2015 romain denizot
*/

int	my_nsqrt(int nb, int n)
{
  int	i;

  i = 0;
  if (n <= 0)
    return (-1);
  while (1)
    {
      if (my_power_rec(n, i) > nb)
	return (i - 1);
      if (i * nb / nb != i)
	return (i);
      i = i + 1;
    }
}
