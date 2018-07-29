/*
** intoparenthesis.c for intoparenthesis in /home/parria_m/Desktop/Piscine_C_bistromathique
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Sun Nov  1 17:10:54 2015 Maxime Parriaux
** Last update Sun Nov  1 21:34:21 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

char	*intoparenthesis(char *beginPar, int sizeBtPar)
{
  char	*str;
  int	i;

  i = 0;
  str = malloc(sizeBtPar + 1);
  if (str == NULL)
    error(1);
  while (i < sizeBtPar)
    {
      str[i] = beginPar[i];
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}
