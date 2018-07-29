/*
** my_isneg.c for my_isneg in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 09:32:57 2015 Vincent Gendron
** Last update Thu Oct  1 20:41:34 2015 Vincent Gendron
*/

int		my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
      return (1);
    }
  else
    my_putchar('P');
  return (1);
}
