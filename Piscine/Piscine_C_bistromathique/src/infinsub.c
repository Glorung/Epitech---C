/*
** infinsub.c for infinsub in /home/parria_m/rendu/Piscine_C_infinadd
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct 19 13:45:21 2015 Maxime Parriaux
** Last update Sun Nov  1 21:33:49 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"
#include "addinf.h"
#include "bistromathique.h"

int	isneg2(char **s1, char **s2)
{
  int	neg;
  char	*s3;
  char	*s4;

  neg = 0;
  s3 = my_strdup(*s1);
  s4 = my_strdup(*s2);
  if (s3[0] == '-' && s4[0] == '-' && (s3 == (s3 = s3 + 1)) &&
      (s4 == (s4 = s4 + 1)));
  else if (s3[0] == '-' && (neg == (neg = neg + 1)))
      s3 = s3 + 1;
  else if (s4[0] == '-')
    {
      neg = neg + 1;
      s4 = s4 + 1;
    }
  free(*s1);
  free(*s2);
  *s1 = s3;
  *s2 = s4;
  return (neg);
}

int	comparestr(char *s1, char *s2)
{
  int	i;

  if (my_strlen(s1) < my_strlen(s2))
    {
      i = -1;
    }
  else if (my_strlen(s1) > my_strlen(s2))
    i = 1;
  else
    {
      if (my_strcmp(s1, s2) > 0)
	i = 1;
      else if (my_strcmp(s1, s2) < 0)
	{
	  i = -1;
	}
      else
	i = 0;
    }
    free(s1);
    free(s2);
  return (i);
}

int	whatinf(char **s1, char **s2)
{
  char	*tmp;

  if (my_strlen(*s2) > my_strlen(*s1))
    {
      tmp = *s1;
      *s1 = *s2;
      *s2 = tmp;
      return (1);
    }
  if (my_strlen(*s2) == my_strlen(*s1))
    {
      if (my_strcmp(*s1, *s2) < 0)
	{
	  tmp = *s1;
	  *s1 = *s2;
	  *s2 = tmp;
	  return (1);
	}
    }
  return (0);
}

void	dosubstraction(char *s3, char *s4, char **rtr, int i)
{
  while (my_strlen(notlongest(s3, s4)) > i)
    {
      if ((s3[i] - 48) - (s4[i] - 48) - ((*rtr)[i] - 48) < 0)
	{
	  (*rtr)[i + 1] = '1';
	  (*rtr)[i] = ':' + (s3[i] - 48) - (s4[i] - 48) - ((*rtr)[i] - 48);
	}
      else
	(*rtr)[i] = ((s3[i] - 48) - (s4[i] - 48) - ((*rtr)[i] - 48)) + 48;
      i = i + 1;
    }
  while (my_strlen(longest(s3, s4)) > i)
    {
      if ((longest(s3, s4)[i] - 48) - ((*rtr)[i] - 48) < 0)
	{
	  (*rtr)[i + 1] = '1';
	  (*rtr)[i] = ':' - (longest(s3, s4)[i] - 48) - ((*rtr)[i] - 48);
	}
      else
	(*rtr)[i] = ((longest(s3, s4)[i] - 48) - ((*rtr)[i] - 48)) + 48;
      i = i + 1;
    }
}

char	*infinsub(char *s1, char *s2)
{
  char	*rtr;
  int	neg;

  neg = whatinf(&s1, &s2);
  s1 = my_revstr(s1);
  s2 = my_revstr(s2);
  rtr = malloc(my_strlen(longest(s1, s2)) + 2);
  if (rtr == NULL)
    error(1);
  rtr = init(rtr, my_strlen(longest(s1, s2)) + 1);
  dosubstraction(s1, s2, &rtr, 0);
  rtr = my_revstr(rtr);
  rtr = removeleadingzero(rtr);
  if (neg == 1)
    rtr = addminusinfront(rtr);
  return (rtr);
}
