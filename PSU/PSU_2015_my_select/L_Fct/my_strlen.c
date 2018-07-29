/*
** my_strlen.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:49:55 2015 Vincent Gendron
** Last update Sun Nov 29 20:02:44 2015 Vincent Gendron
*/

#include	<stdlib.h>

int		my_strlen(char *str)
{
  int		i;

  i = -1;
  if (str == NULL)
    return (0);
  while (str[++i]);
  return (i);
}
