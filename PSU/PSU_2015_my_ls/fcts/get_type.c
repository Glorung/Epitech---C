/*
** get_type.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:12:03 2015 Vincent Gendron
** Last update Sun Nov 22 23:12:13 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include "libmy.h"
#include "main.h"

void		get_type(char *path, char *name)
{
  struct stat	info;
  char		*str;
  char		*str2;

  str2 = str_copy(path, "/");
  str = str_copy(str2, name);
  free(str2);
  stat(str, &info);
  free(str);
  if (S_ISDIR(info.st_mode))
    my_putchar('d');
  else
    my_putchar('-');
}
