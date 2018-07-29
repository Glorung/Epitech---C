/*
** next_operand.c for bistro in /home/denizo_r/rendu/Bistro/Piscine_C_evalexpr
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct 21 10:38:04 2015 romain denizot
** Last update Wed Oct 21 16:01:36 2015 romain denizot
*/

#include	<stdlib.h>
#include	"bistro.h"

char	*next_operand(char **str, int n)
{
  int	i;

  i = 0;
  if (str)
    {
      if (str[i + 1] != NULL)
	i = n + 1;
      else
	return (NULL);
      while (str[i] != NULL)
	{
	  if (is_operand(str[i]))
	    return (str[i]);
	  i = i + 1;
	}
    }
  return (NULL);
}
