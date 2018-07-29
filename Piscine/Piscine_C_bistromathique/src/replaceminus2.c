/*
** replaceminus2.c for replaceminus2 in /home/parria_m/Desktop/Operation
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct 28 05:10:38 2015 Maxime Parriaux
** Last update Sun Nov  1 09:48:52 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"

char	*plusbetterthanminus(char *str, int i)
{
  char	*tmp;
  int	j;

  j = 0;
  tmp = malloc(my_strlen(str) + 1);
  while (j != i)
    {
      tmp[j] = str[j];
      j = j + 1;
    }
  tmp[j] = '+';
  j = j + 1;
  while (str[j + 1])
    {
      tmp[j] = str[j + 1];
      j = j + 1;
    }
  tmp[j] = '\0';
  free(str);
  return (tmp);
}

int     my_char_isnum(char c)
{
  if (c < '0' || c > '9')
    return (0);
  else
    return (1);
}
