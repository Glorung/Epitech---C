/*
** cat.c for cat in /home/gendro_v/rendu/piscine/Piscine_C_J12/cat
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 13 18:10:08 2015 Vincent Gendron
** Last update Wed Oct 14 19:17:30 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	<errno.h>

void		my_puterror(char *str, int error_code)
{
  int		i;

  write(2, "cat: ", 5);
  i = 0;
  while (str[i])
    i = i + 1;
  write(2, str, i);
  if (error_code == 1)
    write(2, ": Is a directory\n", 17);
  else if (error_code == 2)
    write(2, ": Permission denied\n", 20);
  else if (error_code == 3)
    write(2, ": No such file or directory\n", 28);
}

void		cat_it(int fd)
{
  char		buffer[2];

  buffer[1] = '\0';
  while (read(fd, buffer, 1))
    write(1, buffer, 1);
}

void		my_cat(char *filename)
{
  int		fd;

  if (filename == NULL)
    cat_it(0);
  else
    {
      if ((fd = open(filename, O_DIRECTORY)) != -1)
	my_puterror(filename, 1);
      else if ((fd = open(filename, O_RDONLY)) != -1)
	cat_it(fd);
      else if (errno == EACCES)
	my_puterror(filename, 2);
      else
	my_puterror(filename, 3);
    }
}

int		main(int ac, char **av)
{
  int		i;

  if (ac == 1)
    my_cat(NULL);
  else
    {
      i = 1;
      while (i < ac)
	{
	  my_cat(av[i]);
	  i = i + 1;
	}
    }
}
