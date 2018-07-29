/*
** my_square_root.c for my_square_root in /home/parria_m/rendu/Piscine_C_J05
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Fri Oct  2 12:57:26 2015 Maxime Parriaux
** Last update Fri Oct  2 13:15:05 2015 Maxime Parriaux
*/

int	my_square_root(int nb)
{
  int	i;

  if (nb < 0)
    return (0);
  i = 0;
  while (1)
    {
      if (i * i < nb)
	{
	  i = i + 1;
	  if (i > 46340)
	    return (0);
	}
      else if (i * i == nb)
	return (i);
      else
	return (0);
    }
}
