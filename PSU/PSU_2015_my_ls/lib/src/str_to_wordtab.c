/*
** str_to_wordtab.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:16:13 2015 Vincent Gendron
** Last update Sat Nov 21 12:16:19 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "libmy.h"

int     count_word(char *str, char separator)
{
  int   i;
  int   n;

  i = 0;
  n = 1;
  while (str[i] != '\0')
    {
      if (str[i] == separator && str[i + 1] != '\0')
        n++;
      i++;
    }
  return (n);
}

int     countchar(char *str, char separator)
{
  int   c;

  c = 0;
  while ((str[c] != separator) && (str[c] != '\0'))
    c = c + 1;
  c = c + 1;
  return (c);
}

char    **str_to_wordtab(char *str, char separator)
{
  char  **tab;
  int   i;
  int   b;
  int   a;

  b = 0;
  i = 0;
  a = 0;
  tab = malloc(sizeof(*tab) * (count_word(str, separator) + 1));
  while (str[i])
    {
      if (str[i] == separator)
        {
          while (str[i] == separator)
            i++;
          a = a + 1;
          b = 0;
        }
      tab[a] = malloc(sizeof(**tab) * ((countchar(str + i, separator) + 1)));
      while ((str[i] != separator) && (str[i] != '\0'))
        tab[a][b++] = str[i++];
      tab[a][b] = '\0';
    }
   tab[a + 1] = NULL;
  return (tab);
}
