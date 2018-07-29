/*
** my_put_nbr.c for my_put_nbr in /home/parria_m/rendu/Piscine_C_J03
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Sep 30 13:25:47 2015 Maxime Parriaux
** Last update Sun Nov  1 23:23:57 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

int	max_pow(int nb)
{
  int	i;

  i = 0;
  while (nb / 10 > 0)
    {
      i = i + 1;
      nb = nb / 10;
    }
  return (i);
}

char	*add_minus(char *tmp)
{
  char	*min;

  if ((min = malloc(2)) == NULL)
    error(1);
  min[0] = '-';
  min[1] = '\0';
  tmp = my_strcat(min, tmp);
  return (tmp);
}

int	verifneg(int nb, int *neg, char **tmp, int *j)
{
  *j = 0;
  if (nb < 0)
    {
      nb = nb * (- 1);
      *neg = 1;
      *tmp = *tmp + 1;
    }
  return (nb);
}

char	*nbr_to_str(int nb)
{
  char	*tmp;
  int	j;
  int	n;
  int	neg;

  neg = 0;
  if ((tmp = malloc(11)) == NULL)
    error(1);
  if (nb == -2147483648)
    return ("-2147483648");
  nb = verifneg(nb, &neg, &tmp, &j);
  n = max_pow(nb);
  while (j < n)
    {
      tmp[j] = nb / my_power_rec(10, n - j) + 48;
      nb = nb - (tmp[j] - 48) * my_power_rec(10, n - j);
      j = j + 1;
    }
  tmp[j] = nb + 48;
  tmp[j + 1] = '\0';
  if (neg == 1)
    tmp = add_minus(tmp);
  return (tmp);
}
