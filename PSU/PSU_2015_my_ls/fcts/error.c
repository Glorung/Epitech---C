/*
** error.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:09:33 2015 Vincent Gendron
** Last update Sun Nov 22 23:09:40 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "libmy.h"
#include "main.h"

void	error(int i, char *str)
{
  if (i == 1)
    {
      my_putstr("ERROR: Unkown option: ");
      my_putstr(str);
      my_putstr("\nUSAGE : ./my_ls [-option] [-directory]\n");
    }
  else if (i == 2)
    {
      my_putstr("ERROR: Can not oppen ");
      my_putstr(str);
      my_putstr("\nUSAGE : ./my_ls [-option] [-directory]\n");
    }
  else if (i == 3)
    my_putstr("\nERROR : Can not access\n");
  exit(EXIT_FAILURE);
}
