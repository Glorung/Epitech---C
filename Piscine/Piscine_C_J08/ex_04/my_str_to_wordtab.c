/*
** my_str_to_wordtab.c for wordta in /home/gendro_v/rendu/piscine/Piscine_C_J08/ex_04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct  7 17:18:12 2015 Vincent Gendron
** Last update Thu Oct  8 18:45:53 2015 Vincent Gendron
*/

#include	<stdlib.h>

int		c_isalpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
      (c >= '0' c <= '9'))
    return (1);
  else
    return (0);
  return (0);
}

int		count_str_to_tab(char *str)
{
  int		i;
  int		n;

  i = 0;
  n = 1;
  if (!c_isalpha(str[i]))
    while (!c_isalpha(str[i]))
      i = i + 1;
  while (str[i])
    {
      if (!c_isalpha(str[i]) && str[i + 1] != '\0')
	n = n + 1;
      i = i + 1;
    }
  return (n + 1);
}

int		count_c_to_tab(char *str, int i)
{
  int		counter;

  counter = 0;
  while (c_isalpha(str[i]) && str[i])
    {
      counter = counter + 1;
      i = i + 1;
    }
  counter = counter + 1;
  return (counter);
}

int		is_end_to_tab(char *str, int i)
{
  while (str[i] && !c_isalpha(str[i]))
    {
      i = i + 1;
    }
  if (str[i] == '\0')
    return (0);
  return (1);
}

char		**my_str_to_wordtab(char *str)
{
  char		**tab;
  int		i;
  int		b;
  int		a;

  i = 0;
  a = -1;
  b = 0;
  if ((tab = malloc(sizeof(char *) * (count_str_to_tab(str) + 2))) == NULL)
    return (NULL);
  while (str[i] && is_end_to_tab(str, i))
    {
      while (!c_isalpha(str[i]))
	i = i + 1;
      a = a + 1;
      b = 0;
      if ((tab[a] = malloc(sizeof(char) * count_c_to_tab(str, i) + 1)) == NULL)
	return (NULL);
      while (c_isalpha(str[i]) && str[i] && (tab[a][b] = str[i]) == str[i] &&
	     (b = b + 1) == b && (i = i + 1) == i);
      tab[a][b] = '\0';
    }
  tab[a + 1] = NULL;
  return (tab);
}
