/*
** my_factorielle_it.c for my_factorielle in /home/gendro_v/rendu/Piscine_C_J05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 09:19:12 2015 Vincent Gendron
** Last update Fri Oct  2 09:35:02 2015 Vincent Gendron
*/

int		my_factorielle_it(int nb)
{
  int		i;
  int		return_v;

  if (nb == 0 || nb == 1)
    return (1);
  if (nb < 0 || nb > 12)
    return (0);
  i = 0;
  return_v = 1;
  while (i != nb)
    {
      i = i  + 1;
      return_v = return_v * i;
    }
  return (return_v);
}
