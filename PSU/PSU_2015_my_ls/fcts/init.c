/*
** init.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:12:26 2015 Vincent Gendron
** Last update Sun Nov 22 23:12:37 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include "libmy.h"
#include "main.h"

void	init(t_param *ptr)
{
  ptr->path = ".";
  ptr->option_r_maj = 0;
  ptr->option_a = 0;
  ptr->option_l = 0;
  ptr->option_r = 0;
}
