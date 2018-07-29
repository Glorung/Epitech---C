/*
** my_putstr.c for my_putstr in /home/parria_m/rendu/Piscine_C_J04
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct  1 10:26:32 2015 Maxime Parriaux
** Last update Thu Oct 22 18:56:28 2015 Maxime Parriaux
*/

#include <stdlib.h>

int	my_putstr(char *str)
{
  int	n;
  char	tmp;

  if (str != NULL)
    {
      while (*str)
	{
	  tmp = *str;
	  my_putchar(tmp);
	  str = str + 1;
	}
      return (0);
    }
  return (1);
}
