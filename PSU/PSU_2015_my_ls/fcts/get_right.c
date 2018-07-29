/*
** get_right.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:11:22 2015 Vincent Gendron
** Last update Sun Nov 22 23:11:27 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include "libmy.h"
#include "main.h"

void	get_right(char *path, char *name)
{
  struct stat	info;
  char		*str;
  char		*str2;

  str = str_copy(path, "/");
  str2 = str_copy(str, name);
  free(str);
  stat(str2, &info);
  free(str2);
  (info.st_mode & S_IRUSR) ? my_putchar('r') : my_putchar('-');
  (info.st_mode & S_IWUSR) ? my_putchar('w') : my_putchar('-');
  (info.st_mode & S_IXUSR) ? my_putchar('x') : my_putchar('-');
  (info.st_mode & S_IRGRP) ? my_putchar('r') : my_putchar('-');
  (info.st_mode & S_IWGRP) ? my_putchar('w') : my_putchar('-');
  (info.st_mode & S_IXGRP) ? my_putchar('x') : my_putchar('-');
  (info.st_mode & S_IROTH) ? my_putchar('r') : my_putchar('-');
  (info.st_mode & S_IWOTH) ? my_putchar('w') : my_putchar('-');
  (info.st_mode & S_IXOTH) ? my_putchar('x') : my_putchar('-');
  my_putchar(' ');
}
