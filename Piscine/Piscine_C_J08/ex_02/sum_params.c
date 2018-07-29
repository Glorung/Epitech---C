/*
** sum_params.c for sum_param in /home/gendro_v/rendu/piscine/Piscine_C_J08
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct  7 13:46:33 2015 Vincent Gendron
** Last update Wed Oct  7 14:37:50 2015 Vincent Gendron
*/

#include	<stdlib.h>

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		j;

  i = 0;
  while (dest[i])
    i = i + 1;
  j = 0;
  while (src[j])
    {
      dest[i + j] = src[j];
      j = j + 1;
    }
  dest[i + j] = '\0';
  return (dest);
}

char		*sum_params(int argc, char **argv)
{
  int		y;
  int		i;
  char		*str;

  i = 0;
  y = 0;
  while (i < argc)
    {
      y = y + my_strlen(argv[i]);
      i = i + 1;
    }
  if ((str = malloc(sizeof(char) * (y + 2))) == NULL)
    return (NULL);
  str[0] = '\0';
  i = 0;
  while (i < argc)
    {
      str = my_strcat(str, argv[i]);
      y = my_strlen(str);
      str[y + 1] = '\0';
      str[y] = '\n';
      i = i + 1;
    }
  str[my_strlen(str) - 1] = '\0';
  return (str);
}
