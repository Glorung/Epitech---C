/*
** btree_apply_infix.c for sujet de merde in /home/gendro_v/rendu/piscine/Piscine_C_J13/ex_02
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct 14 14:27:01 2015 Vincent Gendron
** Last update Thu Oct 15 15:31:42 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"mylist.h"

void		btree_apply_prefix(t_btree *root, int (*applyf)(void *))
{
  if (root)
    {
      applyf(root->data);
      if (root->left != NULL)
	btree_apply_prefix(root->left, applyf);
      if (root->right != NULL)
	btree_apply_prefix(root->right, applyf);
    }
}
