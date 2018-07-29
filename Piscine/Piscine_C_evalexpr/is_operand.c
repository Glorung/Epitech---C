/*
** is_operand.c for bistro in /home/denizo_r/rendu/Bistro/Piscine_C_evalexpr
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct 20 14:36:59 2015 romain denizot
** Last update Wed Oct 21 15:38:42 2015 romain denizot
*/

#include <stdlib.h>

int	is_operand(char *c)
{
  if (c != NULL)
    {
      if (*c == '/' || *c == '*'
	  || *c == '%')
	return (2);
      if ((*c == '-' || *c == '+')
	  && !*(c + 1))
	return (1);
    }
  return (0);
}
