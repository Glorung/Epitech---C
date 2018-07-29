/*
** btree.h for arbres binaires in /home/denizo_r/rendu/Piscine_C_J13
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct 14 09:50:49 2015 romain denizot
** Last update Mon Oct 19 18:59:56 2015 romain denizot
*/

#ifndef BTREE_H_
# define BTREE_H_

typedef struct		s_btree
{
  struct s_btree	*left;
  struct s_btree	*right;
  void			*item;
} t_btree;

t_btree			*btree_create_node(void *item);
void			*btree_search_item(t_btree *root, void *data_ref,
					   int (*cmpf)(void *, void *));

#endif /* BTREE_H_ */
