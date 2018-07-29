/*
** parsingparenthese.c for parsingparenthesis in /home/parria_m/rendu/Piscine_C_evalexpr
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct 21 02:13:39 2015 Maxime Parriaux
** Last update Sun Nov  1 21:35:16 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "my.h"
#include "findparenthesis.h"
#include "sizebtparenthesis.h"
#include "intoparenthesis.h"
#include "calcul.h"
#include "replaceminus.h"
#include "bistromathique.h"

int	countparenthesis(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i])
    {
      if (str[i] == '(')
	nb = nb + 1;
      i = i + 1;
    }
  return (nb);
}

char	*removeparenthesis(char *str)
{
  char	*tmp;
  int	i;

  i = 0;
  tmp = malloc(my_strlen(str) - 1);
  if (tmp == NULL)
    error(1);
  while (i < (my_strlen(str) - 2))
    {
      tmp[i] = str[i + 1];
      i = i + 1;
    }
  tmp[i] = '\0';
  return (tmp);
}

char	*remove_par_from_str(char *str, char *backup, char *ne)
{
  char	*tmp;
  int	i;

  i = 0;
  tmp = malloc(my_strlen(str) + my_strlen(ne) - sizebtparenthesis(backup) + 1);
  if (tmp == NULL)
    error(1);
  while (my_strcmp(str, backup) != 0)
    {
      tmp[i] = *str;
      i = i + 1;
      str = str + 1;
    }
  tmp[i] = '\0';
  tmp = my_strcat(tmp, ne);
  str = str + sizebtparenthesis(backup);
  tmp[i + my_strlen(ne)] = '\0';
  tmp = my_strcat(tmp, str);
  return (tmp);
}

char	*parsingparenthesis(char *str)
{
  char	*tmp;
  char	*backup;
  char	*tmp2;

  while (countparenthesis(str) != 0)
    {
      backup = findparenthesis(my_strdup(str));
      tmp = intoparenthesis(backup, sizebtparenthesis(backup));
      tmp2 = ordreopepriority(replaceminus(removeparenthesis(tmp)));
      free(tmp);
      str = remove_par_from_str(str, backup, tmp2);
      str = replaceminus(str);
      free(tmp2);
     }
  str = ordreopepriority(str);
  return (str);
}
