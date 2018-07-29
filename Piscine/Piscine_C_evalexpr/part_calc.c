/*
** part_calc.c for bistro in /home/denizo_r/rendu/Bistro
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct 20 10:24:16 2015 romain denizot
** Last update Thu Oct 22 14:06:39 2015 romain denizot
*/

#include "stdlib.h"

#include "include/my.h"

int	is_nb(char *c, int i)
{
  if (c[i] >= '0' && c[i] <= '9')
    return (1);
  if ((c[i] == '-' || c[i] == '+')
      && (c[i - 1] == '(' || i == 0))
    return (1);
  return (0);
}

int	nb_tab(char *calc, int len)
{
  int	i;
  int	nb_wrd;

  i = 0;
  nb_wrd = 0;
  while (i < len - 1)
    {
      if (is_nb(calc, i) == 0 || is_nb(calc, i + 1) == 0 || !calc[i + 1])
	nb_wrd = nb_wrd + 1;
      i = i + 1;
    }
  return (nb_wrd + 1);
}

char	**part_calc(char *calc)
{
  int	len;
  char	**tab;
  int	i;
  int	save;
  int	num;

  save = -1;
  num = 0;
  len = my_strlen(calc);
  tab = malloc(sizeof(char*) * (nb_tab(calc, len) + 1));
  i = 0;
  while (i < len)
    {
      if (is_nb(calc, i) == 0 || is_nb(calc, i + 1) == 0 || !calc[i + 1])
	{
	  tab[num] = malloc(sizeof(char) * (i - save + 1));
	  tab[num] = my_extractstr(tab[num], calc, save + 1, i - save);
	  save = i;
	  num = num + 1;
	}
      i = i + 1;
    }
  tab[num] = NULL;
  return (tab);
}
