/*
** infinmult.c for infinmult in /home/parria_m/test/Piscine_C_evalexpr
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct 22 00:44:26 2015 Maxime Parriaux
** Last update Sun Nov  1 23:10:37 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "addinf.h"
#include "my.h"
#include "infinmult.h"
#include "replaceminus.h"
#include "bistromathique.h"

char	*addzero(char *str, int i)
{
  char	*tmp;
  int	j;

  j = 0;
  if ((tmp = malloc(my_strlen(str) + i + 1)) == NULL)
    error(1);
  while (*str)
    {
      tmp[j] = *str;
      j = j + 1;
      str = str + 1;
    }
  while (i > 0)
    {
      tmp[j] = '0';
      j = j + 1;
      i = i - 1;
    }
  tmp[j] = '\0';
  return (tmp);
}

char	*addmult(char **tmptab, int size)
{
  char	*tmp;
  int	i;

  i = 0;
  if ((tmp = malloc(size + 2)) == NULL)
    error(1);
  tmp = init(tmp, size + 1);
  while (tmptab[i] != NULL)
    {
      tmp = infinadd(tmp, tmptab[i]);
      i = i + 1;
    }
  tmp[size] = '\0';
  i = 0;
  while (tmptab[i])
    {
      free(tmptab[i]);
      i = i + 1;
    }
  return (tmp);
}

int	domult2(char **tmp, char *s1, char *s2, int j)
{
  char  *tmpr;
  char	*tmpa;
  char	*tmpb;
  int	i;

  i = 0;
  while (s1[i])
  {
    tmpr = (*tmp);
    tmpa = nbr_to_str((s1[i] - 48) * (s2[j] - 48));
    tmpb = addzero(tmpa, i + j);
    (*tmp) = infinadd(tmpr, tmpb);
    free(tmpr);
    free(tmpa);
    free(tmpb);
    i = i + 1;
  }
  return (i + j);
}

char	*domult(char *s1, char *s2)
{
  int	j;
  int	a;
  char	*tmp[my_strlen(s2) + 1];

  j = 0;
  while (s2[j])
    {
      tmp[j] = malloc(my_strlen(s1) + my_strlen(s2) + 2);
      if (tmp[j] == NULL)
	error(1);
      tmp[j] = init(tmp[j], my_strlen(s1) + my_strlen(s2) + 1);
      a = domult2(&tmp[j], s1, s2, j);
      tmp[j][a + 1] = '\0';
      j = j + 1;
    }
  tmp[j] = NULL;
  return (addmult(tmp, my_strlen(s1) + my_strlen(s2)));
}

char	*multinf(char *s1, char *s2)
{
  int	neg;
  char	*tmp;

  neg = 0;
  if (is_neg(&s1, &s2) == 1)
    neg = 1;
  s1 = my_revstr(s1);
  s2 = my_revstr(s2);
  if (my_strlen(s1) == 0 || my_strlen(s2) == 0)
      tmp = my_strdup("0");
  else
      tmp = domult(longest(s1, s2), notlongest(s1, s2));
  if (neg == 1 && tmp[0] != '0')
    tmp = addminusinfront(tmp);

  return (tmp);
}
