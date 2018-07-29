/*
** replaceminus.c for replaceminus in /home/parria_m/rendu/Piscine_C_evalexpr
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct 21 01:29:11 2015 Maxime Parriaux
** Last update Sun Nov  1 21:36:49 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"
#include "replaceminus.h"
#include "bistromathique.h"

char	*replaceplusplus(char *str)
{
  char	*tmp;
  int	i;
  char	*save;

  i = -1;
  save = str;
  if ((tmp = malloc(my_strlen(str) + 1)) == NULL)
    error(1);
  while (i == (i = i + 1) && *(str + 1))
    {
      if (*str == '+' && *(str + 1) == '+')
	{
	  while (*str == '+' && *(str + 1) == '+')
	    str = str + 1;
	  tmp[i] = '+';
	  i = i + 1;
	  if (*str == '+' && str == (str = str + 1));
	}
      tmp[i] = *str;
      str = str + 1;
    }
  tmp[i] = *str;
  tmp[i + 1] = '\0';
  free(save);
  return (tmp);
}

void	changeintominus2(char **str, int *i, char **tmp)
{
  int	count;

  if (**str == '-' || **str == '+')
    {
      count = 0;
      while (**str == '-' || **str == '+')
	{
	  if (**str == '-')
	    count = count + 1;
	  *str = *str + 1;
	}
      if (count % 2 == 1)
	(*tmp)[*i] = '-';
      else
	(*tmp)[*i] = '+';
      *i = *i + 1;
    }
}

char	*changeintominus(char *str)
{
  char	*tmp;
  char	*save;
  int	i;

  if ((tmp = malloc(my_strlen(str) + 1)) == NULL)
    error(0);
  save = str;
  i = 0;
  while (*str)
    {
      changeintominus2(&str, &i, &tmp);
      tmp[i] = *str;
      i = i + 1;
      str = str + 1;
    }
  tmp[i] = '\0';
  free(save);
  return (tmp);
}

char	*removeuselessplus(char *str)
{
  char	*tmp;
  int	i;
  char	*save;

  save = str;
  i = 0;
  if ((tmp = malloc(my_strlen(str) + 1)) == NULL)
    error(1);
  if (*str == '+')
    str = str + 1;
  while (*str)
    {
      if (*str == '+' && (*(str - 1) < '0' || *(str - 1) > '9')
	  && *(str + 1) != '\0' && *(str - 1) != ')')
	str = str + 1;
      tmp[i] = *str;
      str = str + 1;
      i = i + 1;
    }
  tmp[i] = '\0';
  free(save);
  return (tmp);
}

char	*replaceminus(char *str)
{
  char	*tmp;
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '-' && str[i + 1] == '-')
	{
	  str = plusbetterthanminus(str, i);
	  i = 0;
	}
      i = i + 1;
    }
  if ((tmp = malloc(my_strlen(str) + 1)) == NULL)
    error(1);
  tmp[0] = '\0';
  my_strcat(tmp, str);
  free(str);
  tmp = replaceplusplus(tmp);
  tmp = changeintominus(tmp);
  tmp = removeuselessplus(tmp);
  return (tmp);
}
