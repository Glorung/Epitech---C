/*
** str_putcharinfront.c for str_putcharinfront in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 14:34:54 2015 Vincent Gendron
** Last update Mon Oct 19 18:37:47 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"infinadd.h"

char		*str_putcharinfront(char *str, char c)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
    return (NULL);
  return_v[0] = c;
  i = 1;
  while (str[i - 1])
    {
      return_v[i] = str[i - 1];
      i = i + 1;
    }
  free(str);
  return_v[i] = '\0';
  return (return_v);
}
