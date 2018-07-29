/*
** mylist.h for mylist in /home/gendro_v/rendu/piscine/Piscine_C_J11/include
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 13 10:48:18 2015 Vincent Gendron
** Last update Tue Oct 13 10:49:34 2015 Vincent Gendron
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct		s_list
{
  void			*data;
  struct s_list		*next;
}			t_list;

#endif /* !MYLIST_H_ */
