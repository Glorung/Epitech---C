/*
** bistromathique.c for bistromathique in /home/parria_m/Desktop/Operation
**
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
**
** Started on  Wed Oct 28 16:40:09 2015 Maxime Parriaux
** Last update Sun Nov  1 23:02:02 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "addinf.h"
#include "infinmult.h"
#include "my.h"
#include "clean.h"
#include "replaceminus.h"
#include "evalexpr.h"
#include "convertbase.h"
#include "bistromathique.h"

int	iscontains(char c, char **argv)
{
  int	i;

  i = 0;
  while (argv[1][i] != '\0')
    {
      if (c == argv[1][i])
	return (1);
      else
	i = i + 1;
    }
  i = 0;
  while (argv[2][i] != '\0')
    {
      if (c == argv[2][i])
	return (1);
      else
	i = i + 1;
    }
  return (0);
}

void	verifeachchar(char **argv, char *tmp)
{
  int	i;

  i = 0;
  while (tmp[i])
    {
      if (iscontains(tmp[i], argv) == 0)
	error(0);
      else
	i = i + 1;
    }
}

int	verifyspace(char **argv)
{
  int	i;

  i = 0;
  while (argv[1][i])
    {
      if (argv[1][i] == ' ')
        return (1);
      i = i + 1;
    }
  i = 0;
  while (argv[2][i])
    {
      if (argv[2][i] == ' ')
        return (1);
      i = i + 1;
    }
  return (0);
}

void	bistromathique(int argc, char **argv)
{
  char  *tmp;

  if (entrycheck(argc, argv) == 1)
    {
      tmp = getthecalcul(argv[3]);
      if (!verifyspace(argv))
	tmp = cleaner(tmp);
      verifeachchar(argv, tmp);
      tmp = entryconvert(tmp, argv);
      tmp = replaceminus(tmp);
      verif(my_strdup(tmp));
      tmp = eval_expr(tmp);
      if (my_strcmp(tmp, "-0") == 0)
	tmp = decimaltobase("0", argv[1]);
      else if (tmp[0] == '-')
	{
	  tmp = decimaltobase(tmp + 1, argv[1]);
	  tmp = str_putcharinfront(tmp, argv[2][3]);
	}
      else
	tmp = decimaltobase(tmp, argv[1]);
      my_putstr(tmp);
    }
}
