/*
** operation.c for operation in /home/parria_m/Desktop/Operation
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct 28 15:12:16 2015 Maxime Parriaux
** Last update Sun Nov  1 21:34:44 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"
#include "operation.h"
#include "calcul.h"
#include "bistromathique.h"

int	opeprioritaire2(char **calcul, char *str, int y, int rangope)
{
  int	i;

  i = 0;
  while (str[y] && y <= rangope)
    {
      (*calcul)[i] = str[y];
      i = i + 1;
      y = y + 1;
    }
  return (i);
}

char	*opeprioritaire(int i, char *str)
{
  int	begin;
  int	rangope;
  int	y;
  char	*calcul;
  char	*tmp;

  rangope = i + 1;
  while (i != 0 && my_char_isnum(str[i - 1]) == 1)
    i = i - 1;
  begin = i;
  if (i != 0 && str[i - 1] == '-')
    begin = begin - 1;
  y = begin;
  while (my_char_isnum(str[rangope + 1]) == 1)
    rangope = rangope + 1;
  i = 0;
  if ((calcul = malloc(rangope - begin + 2)) == NULL)
    error(1);
  i = opeprioritaire2(&calcul, str, y, rangope);
  calcul[i] = '\0';
  calcul = resultat(calcul);
  tmp = replaceres(rangope - begin + 1, begin, calcul, str);
  free(calcul);
  return (tmp);
}

void	replaceres_suite(int *i, char **newstr, char *calcul, int sizecalcul)
{
  int	j;

  j = 0;
  while (j < sizecalcul)
    {
      (*newstr)[(*i)] = calcul[j];
      *i = *i + 1;
      j = j + 1;
    }
}

char	*replaceres(int sizecalc, int begin, char *calcul, char *str)
{
  char	*newstr;
  int	i;
  int	y;

  y = 0;
  i = 0;
  newstr = malloc(my_strlen(str) - sizecalc + my_strlen(calcul) + 1);
  if (newstr == NULL)
    error(1);
  while (str[y])
    {
      if (y == begin)
	{
	  replaceres_suite(&i, &newstr, calcul, my_strlen(calcul));
	  y = y + (sizecalc);
	}
      else
	{
	  newstr[i] = str[y];
	  i = i + 1;
	  y = y + 1;
	}
    }
  newstr[i] = '\0';
  return (newstr);
}
