/*
** my_square_root.c for my_square_root in /home/denizo_r/rendu/J5/Piscine_C_J05
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Fri Oct  2 13:15:12 2015 romain denizot
** Last update Tue Oct 13 19:51:40 2015 romain denizot
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  if (nb < 0)
    return (0);
  while (i <= nb / 2)
    {
      if (i * i == nb)
        return (i);
      if (i * i > nb)
        return (0);
      i = i + 1;
    }
  return (0);
}
