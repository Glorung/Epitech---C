/*
** my_strdup.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 19:31:48 2015 Vincent Gendron
** Last update Sun Nov 22 22:23:20 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"libmy.h"

char		*my_strdup(char *str)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    return (NULL);
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  i = -1;
  while (str[++i])
    return_v[i] = str[i];
  return_v[i] = '\0';
  return (return_v);
}
