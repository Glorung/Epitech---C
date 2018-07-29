/*
** my_put_nbr.c for my_put_nbr in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 10:23:26 2015 Vincent Gendron
** Last update Fri Nov  6 10:48:52 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"include/my.h"

char		*inttostring(int nb)
{
  char		*return_v;
  int		neg;

  neg = 0;
  return_v = NULL;
  if (nb == -2147483648)
    return (my_strdup("-2147483648"));
  if (nb < 0)
    {
      nb = nb * -1;
      neg = 1;
    }
  if (nb / 10 != 0)
    {
      return_v = inttostring(nb / 10);
    }
  return_v = putcharinback(return_v, ((nb % 10) + '0'));
  if (neg == 1)
    return_v = putcharinfront(return_v, '-');
  return (return_v);
}
