/*
** main.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:13:00 2015 Vincent Gendron
** Last update Sun Nov 22 23:13:05 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include "libmy.h"
#include "main.h"

int		main(int argc, char **argv)
{
  t_param	param;

  init(&param);
  get_param(argc, argv, &param);
  ls(&param);
  return (0);
}
