/*
** infinadd.c for infinadd in /home/parria_m/rendu/Piscine_C_infinadd
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct 19 13:45:21 2015 Maxime Parriaux
** Last update Sun Nov  1 23:06:42 2015 Maxime Parriaux
*/

#include	<stdlib.h>
#include	"my.h"
#include	"addinf.h"
#include	"bistromathique.h"

char	*longest(char *s1, char *s2)
{
  if (my_strlen(s1) > my_strlen(s2))
    return (s1);
  else
    return (s2);
}

char	*notlongest(char *s1, char *s2)
{
  if (my_strlen(s1) > my_strlen(s2))
    return (s2);
  else
    return (s1);
}

void	doaddition(char *s1, char *s2, char **rtr)
{
  int	i;

  i = 0;
   while (my_strlen(notlongest(s1, s2)) > i)
    {
      (*rtr)[i + 1] = ((((*rtr)[i] - 48) + (s1[i] - 48)
	+ (s2[i] - 48)) / 10) + 48;
      (*rtr)[i] = ((((*rtr)[i] - 48) + (s1[i] - 48) + (s2[i] - 48)) % 10) + 48;
      i = i + 1;
    }
  while (my_strlen(longest(s1, s2)) > i)
    {
      if (((*rtr)[i] - 48) + (longest(s1, s2)[i] - 48) > 9)
	{
	  (*rtr)[i + 1] = '1';
	  (*rtr)[i] = '0' - ((longest(s1, s2)[i] - 48) % 10);
	}
      (*rtr)[i] = ((((*rtr)[i] - 48) + (longest(s1, s2)[i] - 48)) % 10) + 48;
      i = i + 1;
    }
}

char	*infinadd(char *s1, char *s2)
{
  char	*rtr;

  s1 = my_revstr(s1);
  s2 = my_revstr(s2);
  rtr = malloc(my_strlen(longest(s1, s2)) + 2);
  if (rtr == NULL)
    error(1);
  rtr = init(rtr, my_strlen(longest(s1, s2)) + 1);
  doaddition(s1, s2, &rtr);
  rtr = my_revstr(rtr);
  rtr = removeleadingzero(rtr);
  return (rtr);
}

char	*addinf(char *s1, char *s2)
{
  char  *rtr;
  int   neg;
  char  *s3;
  char	*s4;

  s3 = s1;
  s4 = s2;
  neg = is_neg(&s1, &s2);
  if (neg == 0 || neg == 2)
    rtr = infinadd(s1, s2);
  if (neg == 2 && rtr[0] != '\0')
    rtr = addminusinfront(rtr);
  if (neg == 1)
    rtr = infinsub(s1, s2);
  if (rtr[0] == '\0')
    {
      rtr[0] = '0';
      rtr[1] = '\0';
    }
  free(s3);
  free(s4);
  return (rtr);
}
