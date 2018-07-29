/*
** do-op.c for do op in /home/gendro_v/rendu/piscine/Piscine_C_J10/do-op
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 12 15:26:45 2015 Vincent Gendron
** Last update Mon Oct 12 17:18:18 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	"my.h"

int		main(int ac, char **av)
{
  if (av[2][0] == '+')
    my_put_nbr(my_getnbr(av[1]) + my_getnbr(av[3]));
  else if (av[2][0] == '-')
    my_put_nbr(my_getnbr(av[1]) - my_getnbr(av[3]));
  else if (av[2][0] == 47)
    {
      if (my_getnbr(av[3]) == 0)
	my_putstr("Stop : division by zero");
      else
	my_put_nbr(my_getnbr(av[1]) / my_getnbr(av[3]));
    }
  else if (av[2][0] == '%')
    {
      if (my_getnbr(av[3]) == 0)
	my_putstr("Stop : division by zero");
      else
	my_put_nbr(my_getnbr(av[1]) % my_getnbr(av[3]));
    }
  else if (av[2][0] == 42)
    my_put_nbr(my_getnbr(av[1]) * my_getnbr(av[3]));
  else
    write(1, "b", 1);
  write(1, "\n", 1);
  return (0);
}
