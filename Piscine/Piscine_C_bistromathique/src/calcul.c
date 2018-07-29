/*
** calcul.c for calcul in /home/parria_m/Desktop/Operation
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct 28 15:11:58 2015 Maxime Parriaux
** Last update Sun Nov  1 22:59:11 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "my.h"
#include "operation.h"
#include "operateur.h"
#include "replaceminus.h"
#include "addinf.h"
#include "infinmult.h"
#include "bistromathique.h"

char	*operateur(char ope, char *firstnb, char *secnb)
{
  char	*tmp;

  firstnb = removeleadingzero(firstnb);
  secnb = removeleadingzero(secnb);
  if (ope == '+')
      tmp = addinf(firstnb, secnb);
  else if (ope == '-')
      tmp = addinf(firstnb, addminusinfront(secnb));
  else if (ope == '*')
    {
      tmp = multinf(firstnb, secnb);
      free(firstnb);
      free(secnb);
    }
  else if (ope == '/')
    tmp = infindiv(firstnb, secnb);
  else if (ope == '%')
    return (infinmodulo(firstnb, secnb));
  else
    tmp = my_strdup("ERREUR");
   return (tmp);
}

void	ordreopenpriority(char	**str)
{
  int	i;
  char	*tmp;

  i = 0;
  while ((*str)[i] != '\0')
    {
      if ((*str)[i] == '+' || ((*str)[i] == '-' && i != 0))
        {
          tmp = *str;
          *str = opeprioritaire(i, *str);
          free(tmp);
          i = 0;
        }
      i = i + 1;
    }
}

char	*ordreopepriority(char *str)
{
  char	*tmp;
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '*' || str[i] == '/' || str[i] == '%')
	{
	  tmp = str;
	  str = opeprioritaire(i, str);
	   free(tmp);
	  i = 0;
	}
      i = i + 1;
    }
  ordreopenpriority(&str);
  return (str);
}

char	*fctsecnb(int i, char *str, int *y)
{
  char	*num;

  *y = 0;
  if ((num = malloc(my_strlen(str) + 1)) == NULL)
    error(1);
  num = init(num, my_strlen(str));
  while (str[i] != '\0')
    {
      num[*y] = str[i];
      i = i + 1;
      *y = *y + 1;
    }
  num[*y] = '\0';
  free(str);
  return (num);
}

char	*resultat(char *str)
{
  int	i;
  char	*num;
  char	ope;
  int	y;

  i = 0;
  num = malloc(my_strlen(str) + 1);
  if (num == NULL)
    error(1);
  num = init(num, my_strlen(str));
  if (str[i] == '-')
    {
      num[i] = str[i];
      i = i + 1;
    }
  while (my_char_isnum(str[i]) == 1)
    {
      num[i] = str[i];
      i = i + 1;
    }
  num[i] = '\0';
  ope = str[i];
  return (operateur(ope, num, fctsecnb(i + 1, str, &y)));
}
