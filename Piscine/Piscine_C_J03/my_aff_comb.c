/*
** my_aff_comb.c for my_aff_comb in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 09:37:29 2015 Vincent Gendron
** Last update Thu Oct  1 13:42:17 2015 Vincent Gendron
*/

void		my_put_comb(int nb1, int nb2, int nb3)
{
  my_putchar(nb1 + '0');
  my_putchar(nb2 + '0');
  my_putchar(nb3 + '0');
  if (nb1 != 7)
    {
      my_putchar(',');
      my_putchar(' ');
    }
  else
    my_putchar('.');
}

int		my_aff_comb()
{
  int		nbr_1;
  int		nbr_2;
  int		nbr_3;

  nbr_1 = 0;
  nbr_2 = 1;
  nbr_3 = 2;
  while (nbr_1 != 8)
    {
      my_put_comb(nbr_1, nbr_2, nbr_3);
      nbr_3 = nbr_3 + 1;
      while (nbr_3 == 10)
	{
	  nbr_2 = nbr_2 + 1;
	  nbr_3 = nbr_2 + 1;
	}
      if (nbr_2 == 10)
	{
	  nbr_1 = nbr_1 + 1;
	  nbr_2 = nbr_1 + 1;
	  nbr_3 = nbr_2 + 1;
	}
    }
  return (0);
}
