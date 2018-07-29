/*
** infindiv.c for infindiv in /home/parria_m/test/Piscine_C_evalexpr
**
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
**
** Started on  Thu Oct 22 04:38:26 2015 Maxime Parriaux
** Last update Sun Nov  1 23:17:33 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "my.h"
#include "infinmult.h"
#include "addinf.h"
#include "bistromathique.h"

char	*opti(char *s1, int i)
{
  char	*tmp;
  int	j;

  j = 0;
  if ((tmp = malloc(i + 1)) == NULL)
    error(1);
  while (i > 0)
    {
      tmp[j] = s1[j];
      i = i - 1;
      j = j + 1;
    }
  tmp[j] = '\0';
  return (tmp);
}

char	*pow10inf(char *str, int i)
{
  char	*tmp;
  int	j;
  char	*save;

  j = 0;
  save = str;
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
  free(save);
  return (tmp);
}

int	dodiv2(char *count, char **s1, char *s2, char **rtr)
{
  char	*tmp;
  int	i;

  tmp = my_strdup(s2);
  count = my_strdup("0");
  i = 1;
  while (comparestr(opti(*s1, i), my_strdup(s2)) == -1 && i < my_strlen(*s1))
    i = i + 1;
  while (comparestr(opti(*s1, i), my_strdup(tmp)) >= 0)
    {
      tmp = addinf(tmp, my_strdup(s2));
      count = addinf(count, my_strdup("1"));
    }
  count = pow10inf(count, my_strlen(*s1) - i);
  tmp = addinf(tmp, addminusinfront(my_strdup(s2)));
  tmp = pow10inf(tmp, my_strlen(*s1) - i);
  *s1 = addinf(my_strdup(*s1), addminusinfront(tmp));
  *rtr = addinf(*rtr, my_strdup(count));
  free(count);
  if (my_strcmp(*s1, s2) == 0 && *rtr == (*rtr = addinf(*rtr, my_strdup("1"))))
    return (1);
  return (0);
}

char	*dodiv(char *s1, char *s2)
{
  char	*count;
  char	*rtr;

  count = NULL;
  if ((rtr = malloc(2)) == NULL)
    error(1);
  rtr = init(rtr, 1);
  while (comparestr(my_strdup(s1), my_strdup(s2)) > 0)
    {
      if (dodiv2(count, &s1, s2, &rtr) == 1)
	{
	  break;
	}
    }
  free(s1);
  return (rtr);
}

char	*infindiv(char *s1, char *s2)
{
  char	*tmp;
  int	neg;

  neg = isneg2(&s1, &s2);
  if (my_strlen(s2) == 0 || (my_strlen(s2) == 1 && s2[0] == '-'))
    error(2);
  else if (comparestr(my_strdup(s1), my_strdup(s2)) == -1)
    tmp = my_strdup("0");
  else if (comparestr(my_strdup(s1), my_strdup(s2)) == 0)
    tmp = my_strdup("1");
  else
    tmp = dodiv(s1, s2);
  if (neg == 1)
    tmp = addminusinfront(tmp);
  return (tmp);
}
