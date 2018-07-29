/*
** my_isneg.c for my_isneg in /home/denizo_r/rendu/Piscine_C_J03/Piscine_C_J03
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Thu Oct  1 18:00:24 2015 romain denizot
** Last update Tue Oct 13 19:37:53 2015 romain denizot
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}
