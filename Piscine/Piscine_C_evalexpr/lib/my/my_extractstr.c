/*
** my_extractstr.c for my_extractstr in /home/denizo_r/rendu/Piscine_C_J08/ex_04
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct  7 14:13:51 2015 romain denizot
** Last update Wed Oct 21 16:59:34 2015 romain denizot
*/

#include <stdlib.h>
#include "../../include/my.h"

char	*my_extractstr(char *dest, char *src, int first_c, int len)
{
  int	i;

  i = first_c;
  while (i != (first_c + len))
    {
      dest[i - first_c] = src[i];
      i = i + 1;
    }
  dest[len] = '\0';
  return (dest);
}
