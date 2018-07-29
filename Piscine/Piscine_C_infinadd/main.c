/*
** main.c for infin_add in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 11:13:16 2015 Vincent Gendron
** Last update Tue Oct 20 17:27:12 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"infinadd.h"

int		main(int ac, char **av)
{
  char		*nbr;

  if (ac == 3)
    if (my_isnbr(av[1]) && my_isnbr(av[2]))
      {
	clean_nbrinstr(av[1]);
	clean_nbrinstr(av[2]);
	if ((av[1][0] == '-' || av[2][0] == '-') &&
	    !(av[1][0] == '-' && av[2][0] == '-'))
	  if (av[1][0] == '-')
	    nbr = sub_check(av[2], av[1] + 1);
	  else
	    nbr = sub_check(av[1], av[2] + 1);
	else 
	  if (av[1][0] == '-')
	    nbr = str_putcharinfront(add_inf(av[1] + 1, av[2] + 1), '-');
	  else
	    nbr = add_inf(av[1], av[2]);
	if (nbr == NULL)
	  my_putstr("0");
	else
	  my_putstr(nbr);
      }
  my_putchar('\n');
  return (0);
}
