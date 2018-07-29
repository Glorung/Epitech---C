/*
** my_strlen.c for my_strlen in /home/parria_m/rendu/Piscine_C_J04
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct  1 10:39:46 2015 Maxime Parriaux
** Last update Thu Oct 22 21:48:12 2015 Maxime Parriaux
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  if (str == NULL)
    return (0);
  while (*str)
    {
      n = n + 1;
      str = str + 1;
    }
  return (n);
}
