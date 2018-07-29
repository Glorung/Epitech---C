/*
** get_arg.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:09:57 2015 Vincent Gendron
** Last update Sun Nov 22 23:09:59 2015 Vincent Gendron
*/

#include "libmy.h"
#include "main.h"

void	get_arg(char *str, t_param *ptr)
{
  int	i;

  i = 1;
  while (str[i])
    {
      if (str[i] == 'l')
	ptr->option_l = 1;
      else if (str[i] == 'R')
	ptr->option_r_maj = 1;
      else if (str[i] == 'a')
	ptr->option_a = 1;
      else if (str[i] == 'r')
	ptr->option_r = 1;
      else
	error(1, &str[i]);
      i = i + 1;
    }
}
