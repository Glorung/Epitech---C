/*
** my_putnbr_base.c for my_putnbr_base.c in /home/denizo_r/rendu/Piscine_C_J06/ex_16
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 19:42:38 2015 romain denizot
** Last update Thu Oct  8 17:10:00 2015 romain denizot
*/

int	is_ok(char *base)
{
  int	i;
  int	j;

  i = 0;
  if (base[0] == '\n')
    return (0);
  while (base[i] != '\0')
    {
      j = 0;
      while (j < i)
	{
	  if (base[i] == base[j])
	    return (0);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (1);
}

int	my_putnbr_base(int nbr, char *base)
{
  int	i;
  int	lenBase;
  int	nbr2;
  char	tab[my_nsqrt(nbr, my_strlen(base))];

  nbr2 = nbr;
  lenBase = my_strlen(base);
  if (is_ok(base) == 0)
    return (0);
  i = 0;
  while (nbr2 > lenBase)
    {
      tab[i] = base[nbr2 % lenBase];
      nbr2 = nbr2 / lenBase;
      i = i + 1;
    }
  tab[i] = base[nbr2];
  tab[i + 1] = '\0';
  my_revstr(tab);
  my_putstr(tab);
  return (nbr);
}
