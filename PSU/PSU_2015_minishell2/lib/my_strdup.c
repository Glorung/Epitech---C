/*
** my_strdup.c for my_strdup in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/lib
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 21:19:06 2015 Vincent Gendron
** Last update Sun Dec  6 22:06:56 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "list.h"
#include "my.h"

char	*my_strdup(char *src)
{
  char	*str;
  char	*savestr;

  str = malloc(my_strlen(src) + 1);
  savestr = str;
  if (str == 0)
    return (0);
  while (*src)
    {
      *str = *src;
      src = src + 1;
      str = str + 1;
    }
  *str = '\0';
  return (savestr);
}
