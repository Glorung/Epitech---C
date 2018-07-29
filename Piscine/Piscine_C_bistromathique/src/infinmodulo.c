/*
** infinmodulo.c for infinmodulo in /home/parria_m/Desktop/Operation
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct 27 18:19:37 2015 Maxime Parriaux
** Last update Sun Nov  1 21:32:41 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "addinf.h"
#include "infinmult.h"
#include "my.h"
#include "bistromathique.h"

char	*moduloinf(char *s1, char *s2)
{
  char	*tmp;
  char	*tempo;

  tmp = infindiv(my_strdup(s1), my_strdup(s2));
  tempo = tmp;
  tmp = multinf(tmp, s2);
  free(tempo);
  tmp = infinsub(my_strdup(s1), tmp);
  if (tmp[0] == '\0')
    tmp = my_strdup("0");
  return (tmp);
}

char	*infinmodulo(char *s1, char *s2)
{
  int	neg;
  char	*tmp;

  neg = 0;
  if (s2[0] == '\0' || (s2[0] == '-' && s2[1] == '\0'))
    error(3);
  if (s1[0] == '-')
    neg = 1;
  tmp = moduloinf(s1, s2);
  if (neg == 1 && tmp[0] != '0')
    tmp = addminusinfront(tmp);
  free(s1);
  free(s2);
  return (tmp);
}
