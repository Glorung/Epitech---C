/*
** aff.c for my_select in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Nov 27 15:52:30 2015 Vincent Gendron
** Last update Fri Nov 27 15:52:32 2015 Vincent Gendron
*/

#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "fct.h"

int     my_putchint(int c)
{
  int	fd;

  fd = open("/dev/tty", O_WRONLY);
  write(fd, &c, 1);
  close(fd);
}

void    my_putstr(char *str)
{
  int   i;
  int	fd;

  fd = open("/dev/tty", O_WRONLY);
  i = 0;
  while (str[i])
    i = i + 1;
  write(fd, str, i);
  close(fd);
}

void    my_putstr_inv(char *str)
{
  int   i;
  char  *result;
  int	fd;

  i = 0;
  fd = open("/dev/tty", O_WRONLY);
  result = tgetstr("mr", NULL);
  tputs(result, 1, my_putchint);
  while (str[i])
    i = i + 1;
  write(fd, str, i);
  result = tgetstr("me", NULL);
  tputs(result, 1, my_putchint);
  close(fd);
}

void    my_putstr_soul(char *str)
{
  int   i;
  char  *result;
  int	fd;

  i = 0;
  fd = open("/dev/tty", O_WRONLY);
  result = tgetstr("us", NULL);
  tputs(result, 1, my_putchint);
  while (str[i])
    i = i + 1;
  write(fd, str, i);
  result = tgetstr("ue", NULL);
  tputs(result, 1, my_putchint);
  close(fd);
}

void    my_putstr_combine(char *str)
{
  int   i;
  char  *result;
  int	fd;

  i = 0;
  fd = open("/dev/tty", O_WRONLY);
  result = tgetstr("mr", NULL);
  tputs(result, 1, my_putchint);
  result = tgetstr("us", NULL);
  tputs(result, 1, my_putchint);
  while (str[i])
    i = i + 1;
  write(fd, str, i);
  result = tgetstr("me", NULL);
  tputs(result, 1, my_putchint);
  result = tgetstr("ue", NULL);
  tputs(result, 1, my_putchint);
  close(fd);
}
