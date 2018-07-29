/*
** main.c for lol in /home/gendro_v/Epitech/test
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct 22 15:00:36 2015 Vincent Gendron
** Last update Sun Nov  1 21:36:19 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<string.h>
#include	<stdio.h>
#include	"addinf.h"
#include	"infinmult.h"
#include	"my.h"
#include	"bistromathique.h"

char		*str_fillputstrinback(char *return_v, char *first, char *second)
{
  int		i;
  int		j;

  i = 0;
  j = 0;

  while (first[i])
    {
      return_v[i] = first[i];
      i = i + 1;
    }
  j = 0;
  while (second[j])
    {
      return_v[i] = second[j];
      i = i + 1;
      j = j + 1;
    }
  return_v[i] = '\0';
  return (return_v);
}

char		*str_putstrinback(char *str, char *toput)
{
  char		*new_str;

  if (str == NULL)
    return (toput);
  if (toput == NULL)
    return (str);
  if ((new_str = malloc(sizeof(char *) *
			(my_strlen(str) + my_strlen(toput) + 1))) == NULL)
    error(1);
  new_str = str_fillputstrinback(new_str, str, toput);
  free(str);
  free(toput);
  return (new_str);
}

char		*str_putcharinback(char *str, char c)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
    return (NULL);
  i = 0;
  while (str[i])
    {
      return_v[i] = str[i];
      i = i + 1;
    }
  free(str);
  return_v[i] = c;
  return_v[i + 1] = '\0';
  return (return_v);
}

char		*str_putcharinfront(char *str, char c)
{
  char		*return_v;
  int		i;

  if (str == NULL)
    {
      if ((str = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      str[0] = c;
      str[1] = '\0';
      return (str);
    }
  if ((return_v = malloc(sizeof(char) * my_strlen(str) + 2)) == NULL)
    return (NULL);
  return_v[0] = c;
  i = 1;
  while (str[i - 1])
    {
      return_v[i] = str[i - 1];
      i = i + 1;
    }
  free(str);
  return_v[i] = '\0';
  return (return_v);
}

char		*inttostring(int nb)
{
  char		*return_v;
  int		neg;

  neg = 0;
  return_v = NULL;
  if (nb == -2147483648)
    return (my_strdup("-2147483648"));
  if (nb < 0)
    {
      nb = nb * -1;
      neg = 1;
    }
  if (nb / 10 != 0)
    {
      return_v = inttostring(nb / 10);
    }
  return_v = str_putcharinback(return_v, ((nb % 10) + '0'));
  if (neg == 1)
    return_v = str_putcharinfront(return_v, '-');
  return (return_v);
}
