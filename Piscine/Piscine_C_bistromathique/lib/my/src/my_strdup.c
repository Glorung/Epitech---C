/*
** my_strdup.c for my_strdup in /home/parria_m/rendu/Piscine_C_J08
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct  7 09:31:56 2015 Maxime Parriaux
** Last update Wed Oct 28 11:05:29 2015 Maxime Parriaux
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*str;
  char	*savestr;

  str = malloc(my_strlen(src) + 1);
  savestr = str;
  if (str == 0)
    return (0);
  while (*src)
    {
      *str = *src;
      src = src + 1;
      str = str + 1;
    }
  *str = '\0';
  return (savestr);
}
