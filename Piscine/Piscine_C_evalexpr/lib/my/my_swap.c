/*
** my_swap.c for my_swap.c in /home/denizo_r/rendu/Piscine_C_J04
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Thu Oct  1 09:30:25 2015 romain denizot
** Last update Tue Oct 13 20:13:57 2015 romain denizot
*/

int	my_swap(int *a, int *b)
{
  int	c;
  int	d;

  c = *a;
  d = *b;
  *a = d;
  *b = c;
  return (0);
}
