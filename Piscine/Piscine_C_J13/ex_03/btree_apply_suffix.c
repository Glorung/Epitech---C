/*
** btree_apply_suffix.c for YOLO in /home/gendro_v/rendu/piscine/Piscine_C_J13/ex_03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct 14 14:31:10 2015 Vincent Gendron
** Last update Thu Oct 15 15:31:25 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"mylist.h"

void		btree_apply_infix(t_btree *root, int (*applyf)(void *))
{
  if (root)
    {
      if (root->left != NULL)
	btree_apply_infix(root->left, applyf);
      applyf(root->data);
      if (root->right != NULL)
	btree_apply_infix(root->right, applyf);
    }
}
