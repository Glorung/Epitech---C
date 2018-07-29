/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/denizo_r/rendu/Piscine_C_J08/ex_04
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct  7 12:23:59 2015 romain denizot
** Last update Tue Oct 13 20:11:05 2015 romain denizot
*/

#include <stdlib.h>
#include "../../include/my.h"

int	is_alphanum(char c)
{
  if ((c >= 'a' && c <= 'z')
      || (c >= 'A' && c <= 'Z')
      || (c >= '0' && c <= '9'))
    return (1);
  return (0);
}

int	nb_word(char *str)
{
  int	flag;
  int	nbWord;
  int	i;

  nbWord = 0;
  i = 0;
  while (str[i])
    {
      if (is_alphanum(str[i]) == 1)
	{
	  nbWord = nbWord + 1;
	  while (is_alphanum(str[i]) && str[i])
	    i = i + 1;
	}
      else
	i = i + 1;
    }
  return (nbWord);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  char	**tabWord;
  int	flag;
  int	nbLetter;
  int	numWord;

  tabWord = malloc(sizeof(char *) * nb_word(str) + 1);
  i = 0;
  nbLetter = 0;
  numWord = 0;
  while (i <= my_strlen(str))
    {
      if (is_alphanum(str[i]))
	nbLetter = nbLetter + 1;
      if (is_alphanum(str[i]) == 0 && nbLetter > 0)
	{
	  tabWord[numWord] = malloc(nbLetter + 1);
	  tabWord[numWord] = my_extractstr(tabWord[numWord]\
					   , str, (i - nbLetter), nbLetter);
	  nbLetter = 0;
	  numWord = numWord + 1;
	}
      i = i + 1;
    }
  return (tabWord);
}