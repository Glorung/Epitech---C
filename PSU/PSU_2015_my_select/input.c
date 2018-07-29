/*
** input.c for my_select in /home/gendro_v/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:46:49 2015 Vincent Gendron
** Last update Sun Nov 29 22:37:54 2015 Vincent Gendron
*/

#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include "fct.h"
#include "list.h"
#include "main.h"

void		check_end(t_list *ptr, struct termios *save)
{
  if (ptr->next == NULL)
    {
      free(ptr);
      raw_mode_end(save);
      exit(1);
    }
}

void		del(t_list **list, struct termios *save)
{
  t_list	*ptr;
  t_list	*ptr2;

  ptr = *list;
  check_end(ptr, save);
  if (ptr->choosen == 1)
    {
      *list = ptr->next;
      ptr->next->choosen = 1;
      free(ptr);
    }
  else
    {
      while (ptr->choosen != 1)
	ptr = ptr->next;
      ptr2 = *list;
      while (ptr2->next != ptr)
	ptr2 = ptr2->next;
      ptr2->next = ptr->next;
      if (ptr->next != NULL)
	ptr2->next->choosen = 1;
      else
	(*list)->choosen = 1;
      free(ptr);
    }
}

void		selected(t_list **list)
{
  t_list	*ptr;

  ptr = *list;
  while (ptr->choosen != 1)
    ptr = ptr->next;
  if (ptr->selected == 1)
    ptr->selected = 0;
  else
    ptr->selected = 1;
  next(list);
}

void		prev(t_list **list)
{
  t_list	*ptr;
  t_list	*ptr2;

  ptr = *list;
  ptr2 = *list;
  while (ptr->choosen != 1)
    ptr = ptr->next;
  ptr->choosen = 0;
  if (ptr == ptr2)
    {
      while (ptr->next != NULL)
	ptr = ptr->next;
      ptr->choosen = 1;
    }
  else
    {
      while (ptr2->next != ptr)
	ptr2 = ptr2->next;
      ptr2->choosen = 1;
    }
}

void		next(t_list **list)
{
  t_list	*ptr;

  ptr = *list;
  while (ptr->choosen != 1)
    ptr = ptr->next;
  ptr->choosen = 0;
  if (ptr->next == NULL)
    {
      ptr = *list;
      ptr->choosen = 1;
    }
  else
    {
      ptr = ptr->next;
      ptr->choosen = 1;
    }
}
