/*
** cleaner.c for cleaner in /home/parria_m/Desktop/Nettoyage
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct 27 22:41:58 2015 Maxime Parriaux
** Last update Sun Nov  1 23:03:21 2015 Maxime Parriaux
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

char		*getthecalcul(char *nb)
{
  char		*buffer;
  int		nb_read;

  nb_read = my_getnbr(nb);
  if ((buffer = malloc(sizeof(char) * (nb_read + 1))) == NULL)
    exit(1);
  if ((nb_read =  read(0, buffer, nb_read)) <= 0)
    exit(1);
  if (buffer[nb_read - 1] == '\n')
    buffer[nb_read - 1] = '\0';
  buffer[nb_read] = '\0';
  if (my_strcmp(buffer, "+") == 0 || buffer[0] == '\0')
    error(0);
  return (buffer);
}

char	*cleaner(char *str)
{
  char	*tmp;
  int	i;
  char	*save;

  i = 0;
  save = str;
  if ((tmp = malloc(my_strlen(str) + 1)) == NULL)
    error(1);
  while (*str != '\0')
    {
      while ((*str == ' ' || *str == '\t'
	      || *str == '\n') && *(str + 1) != '\0')
	str = str + 1;
      tmp[i] = *str;
      i = i + 1;
      str = str + 1;
    }
  free(save);
  tmp[i] = '\0';
  return (tmp);
}
