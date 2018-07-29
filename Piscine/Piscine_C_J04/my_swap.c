/*
** my_swap.c for my_swap in /home/gendro_v/rendu/Piscine_C_J04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 16:22:48 2015 Vincent Gendron
** Last update Thu Oct  1 18:05:03 2015 Vincent Gendron
*/

int		my_swap(int *n, int *b)
{
  int		p;

  p = *n;
  *n = *b;
  *b = p;
}
