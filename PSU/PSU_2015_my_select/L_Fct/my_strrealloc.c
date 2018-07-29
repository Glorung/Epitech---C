/*
** my_strrealloc.c for my_strrealloc in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 28 04:15:44 2015 Vincent Gendron
** Last update Sun Nov 29 20:30:38 2015 Vincent Gendron
*/

#include	<stdlib.h>

char		*my_strrealloc(char *str1, char *str2)
{
  char		*new;
  int		len;

  len = my_strlen(str1) + my_strlen(str2) + 1;
  if ((new = malloc(sizeof(char) * len)) == NULL)
    exit(EXIT_FAILURE);
  new[0] = '\0';
  my_strcat(new, str1);
  my_strcat(new, str2);
  if (str1 != NULL)
    free(str1);
  if (str2 != NULL)
    free(str2);
  return (new);
}
