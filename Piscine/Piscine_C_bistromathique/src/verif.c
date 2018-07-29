/*
** verif.c for verif in /home/parria_m/Desktop/Nettoyage
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct 28 01:11:39 2015 Maxime Parriaux
** Last update Sun Nov  1 21:37:14 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"
#include "replaceminus.h"
#include "parsingparenthesis.h"
#include "bistromathique.h"

int	isvalid(char c)
{
  if ((c >= '0' && c <= '9') || c == '+' || c == '-' || c == '('
      || c == '*' || c == '/' || c == '%' || c == ')')
    return (1);
  else
    return (0);
}

int	isoperande(char c)
{
  if (c == '+' || c == '-' || c == '/' || c == '%' || c == '*'
      || c == '(' || c == ')')
    return (1);
  else
    return (0);
}

int	verifparenthesis(char *str)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (str[i])
    {
      if (str[i] == '(')
	j = j + 1;
      if (str[i] == ')')
	k = k + 1;
      i = i + 1;
    }
  if (j != k)
    return (0);
  else
    return (1);
}

void	verifoperande(char *str)
{
  int	i;

  i = 0;
  if (verifparenthesis(str) != 1)
    error(0);
  if (str[i] == '(')
    i = i + 1;
  while (str[i])
    {
      if (str[i] == '(' && isoperande(str[i - 1]) != 1)
	error(0);
      if (str[i] == '('  && isoperande(str[i + 1]) == 1)
	if (str[i + 1] != '-' && str[i + 1] != '+' && str[i + 1] != '(' )
	  error(0);
      if (str[i] == ')' && isoperande(str[i - 1]) == 1 && str[i - 1] != ')')
	error(0);
      if (isoperande(str[i]) == 1 && str[i + 1] == '\0')
	if (str[i] != ')')
	    error(0);
      i = i + 1;
    }
}

void	verif(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (isvalid(str[i]) != 1)
	  error(0);
      i = i + 1;
    }
  i = 0;
  verifoperande(str);
  verifoperande2(str);
  free(str);
}
