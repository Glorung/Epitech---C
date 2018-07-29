/*
** eval_expr.c for Bistro in /home/denizo_r/rendu/Bistro
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct 20 10:13:15 2015 romain denizot
** Last update Thu Oct 22 19:55:31 2015 romain denizot
*/

#include	<stdlib.h>
#include	"bistro.h"
#include	"my.h"

int		eval_expr(char *calc)
{
  char		**tab;
  int		result;

  calc = remove_spaces(calc);
  tab = part_calc(calc);
  tab = calculation(tab);
  result = my_getnbr(tab[0]);
  freetab(tab);
  return (result);
}

char		**operation(char **tab, int i)
{
  int		result;

  if (tab[i + 1][0] == '*')
    result = my_getnbr(tab[i]) * my_getnbr(tab[i + 2]);
  else if (tab[i + 1][0] == '/')
    result = my_getnbr(tab[i]) / my_getnbr(tab[i + 2]);
  else if (tab[i + 1][0] == '%')
    result = my_getnbr(tab[i]) % my_getnbr(tab[i + 2]);
  else if (tab[i + 1][0] == '+')
    result = my_getnbr(tab[i]) + my_getnbr(tab[i + 2]);
  else if (tab[i + 1][0] == '-')
    result = my_getnbr(tab[i]) - my_getnbr(tab[i + 2]);
  free(tab[i]);
  tab[i] = inttostring(result);
  tab = removeintab(tab, i + 1);
  tab = removeintab(tab, i + 1);
  return (tab);
}

char		**calculation(char **tab)
{
  int		i;

  i = 0;
  while (tab[1] != NULL)
    {
      tab = remove_bracket(tab);
      while (next_operand(tab, i) != NULL)
	{
	  if (is_operand(tab[i + 1]))
	    {
	      if (is_operand(tab[i + 1]) == 1
		  && (is_operand(next_operand(tab, i + 1)) != 2
		      || (*tab[i + 3] == ')'))
		  && (is_nbr(tab[i]) && is_nbr(tab[i + 2])))
		tab = operation(tab, i);
	      if (is_operand(tab[i + 1]) == 2 &&
		  is_nbr(tab[i]) && is_nbr(tab[i + 2]))
		tab = operation(tab, i);
	    }
	  i = i + 1;
	}
      i = 0;
    }
  return (tab);
}
