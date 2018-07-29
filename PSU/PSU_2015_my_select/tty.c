/*
** tty.c for my_select in /home/gendro_v/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:48:32 2015 Vincent Gendron
** Last update Sun Nov 29 20:52:52 2015 Vincent Gendron
*/

#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "fct.h"
#include "list.h"
#include "main.h"

char		*get_next_selected(t_list *pos, char *str)
{
  while (pos != NULL)
    {
      if (pos->selected == 1)
	{
	  pos->selected = 0;
	  str = my_strrealloc(str, my_strdup(pos->name));
	  str = my_strrealloc(str, my_strdup(" "));
	  return (str);
	}
      pos = pos->next;
    }
  return (NULL);
}

void		my_report(t_list **list, struct termios *save)
{
  t_list	*ptr;
  char		*str;
  char		*tmp;

  tmp = NULL;
  ptr = *list;
  str = my_strdup("");
  while ((str = get_next_selected(ptr, str)) != NULL)
    tmp = str;
  free_screen();
  if (tmp != NULL)
    {
  tmp[my_strlen(tmp) - 1] = '\0';
  my_put_tty(tmp);
  free(tmp);
    }
  raw_mode_end(save);
  exit(1);
}

void	my_put_tty(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  write(1, str, i);
}
