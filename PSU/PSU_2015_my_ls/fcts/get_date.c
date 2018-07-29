/*
** get_date.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:10:08 2015 Vincent Gendron
** Last update Sun Nov 22 23:14:11 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>
#include "libmy.h"
#include "main.h"

void	get_date(char *path, char *name)
{
  struct stat	info;
  char		*str;
  char		*str2;
  int		i;

  str2 = str_copy(path, "/");
  str = str_copy(str2, name);
  free(str2);
  stat(str, &info);
  free(str);
  str = ctime(&(info.st_mtime));
  i = my_strlen(str);
  str[i - 2] = '\0';
  my_putstr(str);
  my_putchar('\t');
}
