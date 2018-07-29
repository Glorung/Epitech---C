/*
** main.c for convert entry in /home/gendro_v/Epitech/test/convert_entry
**
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
**
** Started on  Mon Oct 26 17:18:49 2015 Vincent Gendron
** Last update Sun Nov  1 22:34:26 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<string.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"infinmult.h"
#include	"addinf.h"
#include	"my.h"
#include	"convertbase.h"
#include	"bistromathique.h"

char		*entryread(char *nb)
{
  int		nb_read;
  char		*buffer;

  if ((nb_read = my_getnbr(nb)) <= 0)
    error(0);
  if ((buffer = malloc(sizeof(char) * nb_read + 1)) == NULL)
    error(1);
  if ((nb_read = read(0, buffer, nb_read)) <= 0)
    error(1);
  buffer[nb_read] = '\0';
  return (buffer);
}

int		samecharinstring(char *str)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i])
    {
      while (str[j])
	{
	  if (str[j] == str[i] && i != j)
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
      j = 0;
    }
  return (0);
}

int		samecharinstrings(char *str1, char *str2)
{
  int		i_str1;
  int		i_str2;

  i_str1 = 0;
  i_str2 = 0;

  while (str1[i_str1])
    {
      i_str2 = 0;
      while (str2[i_str2])
	{
	  if (str1[i_str1] == str2[i_str2])
	    return (1);
	  i_str2 = i_str2 + 1;
	}
      i_str1 = i_str1 + 1;
    }
  if (samecharinstring(str1) || samecharinstring(str2))
    return (1);
  return (0);
}

int		entrycheck(int ac, char **av)
{
  if (ac != 4)
    error(1);
  else if (my_strlen(av[1]) <= 1)
    error(1);
  else if (my_strlen(av[2]) != 7)
    error(1);
  else if (samecharinstrings(av[1], av[2]) == 1)
    error(1);
  else
    return (1);
  return (0);
}
