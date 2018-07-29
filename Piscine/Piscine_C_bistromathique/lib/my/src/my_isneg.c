/*
** my_isneg.c for my_isneg in /home/parria_m/rendu/Piscine_C_J03
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Sep 30 10:23:47 2015 Maxime Parriaux
** Last update Thu Oct  1 16:56:20 2015 Maxime Parriaux
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}
