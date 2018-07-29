/*
** my_aff_comb2.c for my_aff_comb2 in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 09:28:43 2015 Vincent Gendron
** Last update Thu Oct  1 09:52:07 2015 Vincent Gendron
*/

void		show_my_aff_comb2(int nb1, int nb2)
{
  my_putchar(nb1 / 10 + '0');
  my_putchar(nb1 % 10 + '0');
  my_putchar(' ');
  my_putchar(nb2 / 10 + '0');
  my_putchar(nb2 % 10 + '0');
  if (nb1 == 98 && nb2 == 99)
    my_putchar('.');
  else
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int		my_aff_comb2()
{
  int		nb1;
  int		nb2;

  nb1 = 0;
  nb2 = 1;
  while (nb1 < 99)
    {
      show_my_aff_comb2(nb1, nb2);
      nb2 = nb2 + 1;
      if (nb2 == 100)
	{
	  nb1 = nb1 + 1;
	  nb2 = nb1 + 1;
	}
    }
}
