/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/parria_m/rendu/Piscine_C_J08
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct  7 12:20:06 2015 Maxime Parriaux
** Last update Thu Oct  8 15:43:49 2015 Maxime Parriaux
*/

#include <stdlib.h>

int	char_isalphanum(char c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
      || (c >= '0' && c <= '9'))
    return (1);
  else
    return (0);
}

int	count_word(char *str)
{
  int	count;
  int	i;

  count = 0;
  i = 0;
  while (str[i])
    {
      if (char_isalphanum(str[i]))
	{
	  count = count + 1;
	  while (char_isalphanum(str[i]))
	    i = i + 1;
	}
      i = i + 1;
    }
  return (count);
}

int	count_char(char *str)
{
  int	count;

  count = 0;
  while (char_isalphanum(*str))
    {
      count = count + 1;
      str = str + 1;
    }
  return (count);
}

int	fill(int i, char *str, char **tab)
{
  int	j;

  j = 0;
  while (char_isalphanum(*str) == 1)
    {
      tab[i][j] = *str;
      j = j + 1;
      str = str + 1;
    }
  return (j);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	count;
  int	i;

  count = count_word(str);
  tab = malloc(sizeof(char *) * count + 1);
  i = 0;
  while (*str != 0)
    {
      while (char_isalphanum(*str) == 0)
	str = str + 1;
      tab[i] = malloc(count_char(str));
      str = str + fill(i, str, tab);
      i = i + 1;
    }
  tab[i] = 0;
  return (tab);
}
