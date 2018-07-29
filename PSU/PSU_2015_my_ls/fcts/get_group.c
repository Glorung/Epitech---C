/*
** get_group.c for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/fcts
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 23:10:20 2015 Vincent Gendron
** Last update Sun Nov 22 23:14:47 2015 Vincent Gendron
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <grp.h>
#include "libmy.h"
#include "main.h"

void		get_group(char *path, char *name)
{
  struct stat	info;
  struct group	*group;
  char		*str;
  char		*str2;

  str = str_copy(path, "/");
  str2 = str_copy(str, name);
  free(str);
  stat(str2, &info);
  free(str2);
  group = getgrgid(info.st_gid);
  if (group != NULL)
    {
      my_putstr(group->gr_name);
      my_putchar(' ');
    }
}
