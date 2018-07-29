/*
** my_len_int.c for my_len_int in /home/denizo_r/rendu/Piscine_C_J07/lib/my
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct  6 18:08:13 2015 romain denizot
** Last update Wed Oct  7 21:36:29 2015 romain denizot
*/

int	my_intlen(int nb)
{
  int	i;

  i = 1;
  while (my_power_rec(10, i) < nb)
    {
      i = i + 1;
    }
  return (i);
}
