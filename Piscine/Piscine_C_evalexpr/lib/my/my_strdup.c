/*
** my_strdup.c for my_strdup in /home/denizo_r/rendu/Piscine_C_J08/ex_01
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct  7 09:40:00 2015 romain denizot
** Last update Wed Oct  7 10:13:53 2015 romain denizot
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*dest;
  int	len;

  len = my_strlen(src);
  dest = malloc(len + 1);
  free(dest);
  my_strcpy(dest, src);
  return (dest);
}
