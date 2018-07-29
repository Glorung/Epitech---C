/*
** main.c for my_select in /home/gendro_v/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:47:38 2015 Vincent Gendron
** Last update Fri Nov 27 16:59:39 2015 Vincent Gendron
*/

#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#include <ncurses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "fct.h"
#include "list.h"
#include "main.h"

void			init_env(char **env, struct termios *select)
{
  char			*str;

  str = my_getenv(env);
  if (tgetent(NULL, str) == -1)
      exit(-1);
  free(str);
  raw_mode(select);
}

void		init_list(t_list **list, int argc, char **argv)
{
  t_list	*ptr;

  my_put_in_list(list, argc, argv);
  ptr = *list;
  while (ptr != NULL)
    {
      ptr->selected = 0;
      ptr->choosen = 0;
      ptr = ptr->next;
    }
  ptr = *list;
  ptr->choosen = 1;
}

int			main(int argc, char **argv, char **env)
{
  t_list		*list;
  struct termios	term;
  struct termios	save;
  t_winconfig		config;

  if (argc > 1)
    {
      list = NULL;
      tcgetattr(0, &term);
      save = term;
      init_env(env, &term);
      init_list(&list, argc, argv);
      setup_win(&list, &config, &save);
      user_waiting(&list, &save, &config);
    }
  return (0);
}
