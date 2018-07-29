/*
** my_strdup.c for strdup in /home/gendro_v/rendu/piscine/Piscine_C_J08
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct  7 13:28:50 2015 Vincent Gendron
** Last update Thu Oct  8 14:17:38 2015 Vincent Gendron
*/

#include	<stdlib.h>

char		*my_strdup(char *str)
{
  int		i;
  char		*new;

  i = 0;
  while (str[i]) 
    i = i + 1;
  if ((new = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  i = 0;
  while (str[i])
    {
      new[i] = str[i];
      i = i + 1;
    }
  new[i] = '\0';
  return (new);
}
