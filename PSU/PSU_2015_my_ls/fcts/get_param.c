/*
** get_param.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:11:07 2015 Vincent Gendron
** Last update Sun Nov 22 23:11:13 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include "libmy.h"
#include "main.h"

void	get_param(int argc, char **argv, t_param *param)
{
  int	i;

   if (argc > 1)
    {
      i = 1;
      while (i < argc)
	{
	  if (argv[i][0] == '-')
	    get_arg(argv[i], param);
	  else
	    param->path = argv[i];
	  i = i + 1;
	}
    }
}

