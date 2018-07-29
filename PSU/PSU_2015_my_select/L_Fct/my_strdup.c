/*
** my_strdup.c for my_strdup in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 28 04:10:16 2015 Vincent Gendron
** Last update Sun Nov 29 20:24:05 2015 Vincent Gendron
*/

#include	<stdlib.h>

char		*my_strdup(char *str)
{
  int		i;
  char		*new;

  if ((new = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    exit(EXIT_FAILURE);
  i = -1;
  while (str[++i])
    new[i] = str[i];
  new[i] = '\0';
  return (new);
}
