/*
** evalexpr.c for evalexpr in /home/parria_m/rendu/Piscine_C_evalexpr
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct 20 09:17:31 2015 Maxime Parriaux
** Last update Sun Nov  1 21:30:51 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"parsingparenthesis.h"
#include	"my.h"
#include	"bistromathique.h"

char	*eval_expr(char *str)
{
  char  *tmp;

  if (str != NULL)
    {
      tmp = parsingparenthesis(my_strdup(str));
      free(str);
      return (tmp);
    }
  else
    error(0);
  return (NULL);
}
