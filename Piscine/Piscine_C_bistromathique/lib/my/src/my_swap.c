/*
** my_swap.c for my_swap in /home/parria_m/rendu/Piscine_C_J04
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct  1 10:14:31 2015 Maxime Parriaux
** Last update Thu Oct  1 16:59:00 2015 Maxime Parriaux
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
