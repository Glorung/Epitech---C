/*
** main.c for convert entry in /home/gendro_v/Epitech/test/convert_entry
**
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
**
** Started on  Mon Oct 26 17:18:49 2015 Vincent Gendron
** Last update Sun Nov  1 21:29:39 2015 Vincent Gendron
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

char		*my_strdup_plus(char *str, int begin, int end)
{
  char		*return_v;
  int		i;

  if ((return_v = malloc(sizeof(char) * (end - begin + 2))) == NULL)
    exit(1);
  i = 0;
  while (begin != end)
    {
      return_v[i] = str[begin];
      i = i + 1;
      begin = begin + 1;
    }
  return_v[i] = '\0';
  return (return_v);
}

char		*entryconvertfillnb(char *out, char *str, char **av, int *i)
{
  int		j;

  j = *i;
  while (isinstr(av[1], str[j]) != -1)
    j = j + 1;
  out = str_putstrinback(out, convert_base(my_strdup_plus(str, *i, j),
					   av[1], "0123456789"));
  *i = j - 1;
  return (out);
}

char		*entryconvertfillop(char *out, char *str, char **av, int i)
{
  int		j;

  j = 0;
  while (str[i] != av[2][j])
    j = j + 1;
  out = str_putcharinback(out, BASE_OP[j]);
  return (out);
}

char		*entryconvert(char *str, char **av)
{
  int		i;
  int		op;
  char		*out;

  i = 0;
  out = NULL;
  op = 0;
  while (str[i])
    {
      if (isinstr(av[2], str[i]) != -1)
	{
	  if (op == str[i] && (str[i] == av[2][4] ||
			       str[i] == av[2][5] || str[i] == av[2][6]))
	    error(0);
	  out = entryconvertfillop(out, str, av, i);
	}
      else if (isinstr(av[1], str[i]) != -1)
	out = entryconvertfillnb(out, str, av, &i);
      else
	error(4);
      op = str[i];
      i = i + 1;
    }
  free(str);
  return (out);
}
