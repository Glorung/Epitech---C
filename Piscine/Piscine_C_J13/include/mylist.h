/*
** mylist.h for list in /home/gendro_v/rendu/piscine/Piscine_C_J13/include
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct 15 15:21:05 2015 Vincent Gendron
** Last update Thu Oct 15 15:22:57 2015 Vincent Gendron
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct		s_btree
{
  struct s_btree	*left;
  struct s_btree	*right;
  void			*item;
}			t_btree;

#endif	 /* !MYLIST_H_ */
