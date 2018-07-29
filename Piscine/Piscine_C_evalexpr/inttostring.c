/*
** my_put_nbr.c for my_put_nbr in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 10:23:26 2015 Vincent Gendron
** Last update Wed Oct 21 09:21:29 2015 romain denizot
*/

#include	<stdlib.h>
#include	"include/my.h"

char		*str_putcharinback(char *str, char c)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
    return (NULL);
  i = 0;
  while (str[i])
    {
      return_v[i] = str[i];
      i = i + 1;
    }
  free(str);
  return_v[i] = c;
  return_v[i + 1] = '\0';
  return (return_v);
}

char		*str_putcharinfront(char *str, char c)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
    return (NULL);
  return_v[0] = c;
  i = 1;
  while (str[i - 1])
    {
      return_v[i] = str[i - 1];
      i = i + 1;
    }
  free(str);
  return_v[i] = '\0';
  return (return_v);
}

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
  return_v = str_putcharinback(return_v, ((nb % 10) + '0'));
  if (neg == 1)
    return_v = str_putcharinfront(return_v, '-');
  return (return_v);
}
