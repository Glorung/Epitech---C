/*
** my_strcat.c for my_strcat in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 28 04:12:55 2015 Vincent Gendron
** Last update Sun Nov 29 20:07:54 2015 Vincent Gendron
*/

#include	<stdlib.h>

char		*my_strcat(char *str1, char *str2)
{
  int		i;
  int		j;

  i = -1;
  while (str1 != NULL && str1[++i]);
  j = -1;
  while (str2 != NULL && str2[++j])
    str1[i++] = str2[j];
  str1[i] = '\0';
}
