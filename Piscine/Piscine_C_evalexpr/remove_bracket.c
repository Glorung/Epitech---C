/*
** remove_bracket.c for bistro in /home/denizo_r/rendu/Bistro/Piscine_C_evalexpr
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Thu Oct 22 14:04:21 2015 romain denizot
** Last update Thu Oct 22 14:04:27 2015 romain denizot
*/

#include	<stdlib.h>
#include	"include/bistro.h"

char		**remove_bracket(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (tab[i][0] == '(' && tab[i + 2][0] == ')')
	{
	  tab = removeintab(tab, i);
	  tab = removeintab(tab, i + 1);
	  tab = remove_bracket(tab);
	}
      i = i + 1;
    }
  return (tab);
}
