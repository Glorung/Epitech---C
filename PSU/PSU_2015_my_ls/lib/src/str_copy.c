/*
** str_copy.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:09:46 2015 Vincent Gendron
** Last update Sat Nov 21 12:20:36 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "libmy.h"

char	*str_copy(char *str1, char *str2)
{
  int	i;
  int	j;
  char	*str;

  str = malloc(sizeof(str) * (my_strlen(str1) + my_strlen(str2) + 1));
  if (str == NULL)
    exit(EXIT_FAILURE);
  i = 0;
  while (str1[i])
    str[i] = str1[i++];
  j = 0;
  while (str2[j])
    str[i++] = str2[j++];
  str[i] = '\0';
  return (str);
}
