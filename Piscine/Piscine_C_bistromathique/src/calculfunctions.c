/*
** infinadd.c for infinadd in /home/parria_m/rendu/Piscine_C_infinadd
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct 19 13:45:21 2015 Maxime Parriaux
** Last update Sun Nov  1 23:32:21 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "my.h"
#include "addinf.h"
#include "bistromathique.h"

int	countminus(char *s)
{
  int	i;

  i = 0;
  while (*s)
    {
      if (*s == '-')
	i = i + 1;
      s = s + 1;
    }
  return (i);
}

int	is_neg(char **s1, char **s2)
{
  char	*tmp;

  if (countminus(*s1) > 1 || countminus(*s2) > 1)
    return (-1);
  if (countminus(*s1) == 0 && countminus(*s2) == 0)
    return (0);
  if (countminus(*s1) == 1 && countminus(*s2) == 1)
    {
      *s1 = *s1 + 1;
      *s2 = *s2 + 1;
      return (2);
    }
  if (countminus(*s1) == 1 && countminus(*s2) == 0)
    {
      *s1 = *s1 + 1;
      tmp = *s1;
      *s1 = *s2;
      *s2 = tmp;
      return (1);
    }
  else
    {
      *s2 = *s2 + 1;
      return (1);
    }
}

char	*removeleadingzero(char *str)
{
  int	i;
  int	j;
  char 	*tmp;

  i = 0;
  j = 0;
  if ((tmp = malloc(my_strlen(str) + 1)) == NULL)
    error(1);
  if (str[0] == '-')
  {
    tmp[0] = '-';
    j = j + 1;
    i = i + 1;
  }
  while (str[i] && (str[i] == '0'))
    i = i + 1;
  while (str[i])
    {
      tmp[j] = str[i];
      j = j + 1;
      i = i + 1;
    }
  tmp[j] = '\0';
  free(str);
  return (tmp);
}

char	*addminusinfront(char *str)
{
  char	*tmp;
  int	i;

  i = 0;
  if ((tmp = malloc(my_strlen(str) + 2)) == NULL)
    error(1);
  tmp[0] = '-';
  while (str[i])
    {
      tmp[i + 1] = str[i];
      i = i + 1;
    }
  tmp[i + 1] = '\0';
  free(str);
  return (tmp);
}

char	*init(char *str, int lenght)
{
  int	i;

  i = 0;
  while (i < lenght)
    {
      str[i] = '0';
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}
