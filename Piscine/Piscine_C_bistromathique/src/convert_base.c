/*
** main.c for lol in /home/gendro_v/Epitech/test
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct 22 15:00:36 2015 Vincent Gendron
** Last update Sun Nov  1 23:04:27 2015 Maxime Parriaux
*/

#include	<stdlib.h>
#include	<string.h>
#include	<stdio.h>
#include	"addinf.h"

#include	"infinmult.h"
#include	"convertbase.h"
#include	"my.h"

int		isinstr(char *str, char c)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (i);
      i = i + 1;
    }
  return (-1);
}

char		*basetodecimal(char *nb, char *base)
{
  char		*result;
  char		*pos;
  unsigned int	i;
  unsigned int	base_len;
  char		*tmp[2];

  result = my_strdup("0");
  pos = my_strdup("1");
  base_len = my_strlen(base);
  i = my_strlen(nb);
  while (i != 0 && isinstr(base, nb[i - 1]) != -1)
    {
      tmp[0] = multinf(inttostring(isinstr(base, nb[i - 1])),
		       tmp[1] = my_strdup(pos));
      result = addinf(tmp[1] = result, tmp[0]);
      pos = multinf(tmp[0] = pos, inttostring(base_len));
      i = i - 1;
    }
  free(pos);
  return (result);
}

char		*decimaltobase(char *nb, char *base)
{
  char		*result;
  char		*tmp[2];
  char		*len_base;

  result = NULL;
  len_base = inttostring(my_strlen(base));
  if (my_strcmp(tmp[0] = infindiv(my_strdup(nb),
				  my_strdup(len_base)), "0") != 0)
    result = decimaltobase(infindiv(my_strdup(nb), my_strdup(len_base)), base);
  free(tmp[0]);
  result = str_putcharinback(result,
			     base[my_getnbr(tmp[0] = infinmodulo(my_strdup(nb),
								 len_base))]);
  free(tmp[0]);
  return (result);
}

char		*convert_base(char *nb, char *from, char *to)
{
  char		*result;

  result = NULL;
  result = basetodecimal(nb, from);
  result = decimaltobase(result, to);
  free(nb);
  return (result);
}
