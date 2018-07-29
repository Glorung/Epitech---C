/*
** error.c for error in /home/parria_m/test/Piscine_C_evalexpr
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct 22 22:08:05 2015 Maxime Parriaux
** Last update Sun Nov  1 23:01:53 2015 Maxime Parriaux
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

void	error(int nb)
{
  if (nb == 0)
    {
      my_putstr(SYNTAXE_ERROR_MSG);
    }
  if (nb == 1)
    my_putstr(ERROR_MSG);
  else if (nb == 2)
    my_putstr(ERROR_MSG);
  else if (nb == 3)
    my_putstr(ERROR_MSG);
  else if (nb == 4)
    error(0);
  exit(1);
}
