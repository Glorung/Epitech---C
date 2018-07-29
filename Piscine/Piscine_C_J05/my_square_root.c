/*
** my_square_root.c for square_root in /home/gendro_v/rendu/Piscine_C_J05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 17:06:36 2015 Vincent Gendron
** Last update Fri Oct  2 17:15:27 2015 Vincent Gendron
*/

int	my_square_root(int nb)
{
  int	i;

  if (nb < 0)
    return (0);
  i = nb;
  while (i != 0)
    {
      if ((i * i) == nb)
	return (1);
      i = i - 1;
    }
  return (0);
}
