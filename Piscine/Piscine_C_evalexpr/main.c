/*
** main.c for bistro in /home/denizo_r/rendu/Bistro/Piscine_C_evalexpr
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct 21 14:59:46 2015 romain denizot
** Last update Thu Oct 22 14:05:01 2015 romain denizot
*/

#include "bistro.h"
#include "my.h"

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      my_put_nbr(eval_expr(av[1]));
      my_putchar('\n');
    }
  return (0);
}
