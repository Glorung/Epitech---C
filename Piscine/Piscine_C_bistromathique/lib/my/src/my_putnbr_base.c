/*
** my_putnbr_base.c for my_putnbr_base in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 19:12:29 2015 Maxime Parriaux
** Last update Tue Oct  6 18:43:44 2015 Maxime Parriaux
*/

int	puissancemax(int nbr, int nbbase)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (1)
    {
      while (j < nbbase + 1)
	{
	  if (j * my_power_rec(nbbase, i) >= nbr)
	    return (i);
	  j = j + 1;
	}
      j = 1;
      i = i + 1;
    }
}

int	afficher(int nbr, int nbbase, int puissance, char *base)
{
  int	j;

  j = 0;
  while (1)
    {
      j = j + 1;
      if (j * my_power_rec(nbbase, puissance) > nbr)
	{
	  my_putchar(base[j - 1]);
	  return (j - 1);
	}
      if (j * my_power_rec(nbbase, puissance) == nbr)
	{
	  my_putchar(base[j]);
	  return (j);
	}
    }
}

int	my_putnbr_base(int nbr, char *base)
{
  int	nbbase;
  int	pow;
  int	nb;
  int	tmp;

  if (nbr < 0)
    {
      my_putchar('-');
      nb = nbr * (-1);
    }
  else
    nb = nbr;
  nbbase = my_strlen(base);
  pow = puissancemax(nbr, nbbase);
  while (pow > 0)
    {
      tmp = afficher(nb, nbbase, pow, base);
      nb = nb - tmp * my_power_rec(nbbase, pow);
      pow = pow - 1;
    }
  my_putchar(base[nb % nbbase]);

  return (nbr);
}
