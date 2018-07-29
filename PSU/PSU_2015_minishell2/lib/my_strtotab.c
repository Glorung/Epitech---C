/*
** mstr_tab.c for lib in /mnt/home/hiprog/Epitech/PSU_2014_minishell1/libc/my
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun May 17 21:33:11 2015 Vincent Gendron
** Last update Sun Dec  6 22:24:33 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "list.h"
#include "my.h"

int     count_word(char *str, char separator)
{
  int	i;
  int	n;

  i = 0;
  n = 1;
  if (str[i] == separator)
    {
      while (str[i] == separator)
	i++;
    }
  while (str[i])
    {
      if (str[i] == separator && str[i + 1] != '\0')
        n++;
      i++;
    }
  return (n + 1);
}

int     cchar(char *str, int i, char separator)
{
  int	c;

  c = 0;
  while ((str[i] != separator) && (str[i] != '\0'))
    {
      c = c + 1;
      i = i + 1;
    }
  c = c + 1;
  return (c);
}

char    **my_strtotab(char *str, char separator)
{
  char	**tab;
  int	i;
  int	b;
  int	a;

  b = 0;
  i = 0;
  a = 0;
  tab = my_malloc_tab(sizeof(*tab) * (count_word(str, separator) + 1));
  while (str[i])
    {
      if (str[i] == separator)
        {
          while (str[i] == separator)
            i++;
          a = a + 1;
          b = 0;
        }
      tab[a] = my_malloc(sizeof(char) * ((cchar(str, i, separator) + 1)));
      while ((str[i] != separator) && (str[i] != '\0'))
        tab[a][b++] = str[i++];
      tab[a][b] = '\0';
    }
   tab[a + 1] = NULL;
  return (tab);
}
