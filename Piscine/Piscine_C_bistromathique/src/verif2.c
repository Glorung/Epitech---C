/*
** verif2.c for verif2 in /home/parria_m/Desktop/Piscine_C_bistromathique
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Sun Nov  1 17:35:55 2015 Maxime Parriaux
** Last update Sun Nov  1 23:29:36 2015 Maxime Parriaux
*/

#include "bistromathique.h"
#include "replaceminus.h"

void		verifoperande2(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if ((str[i] == '+' || str[i] == '-')
	  && (str[i + 1] == '*' || str[i + 1] == '/' || str[i + 1] == '%'))
	error(0);
      else if (str[i] == ')'
	       && (isoperande(str[i + 1]) == 0 && str[i + 1] != '\0'))
	error(0);
      else if ((str[i] == '*' || str[i] == '/' || str[i] == '%')
	       && i == 0)
	error(0);
      else
	i = i + 1;
    }
}
