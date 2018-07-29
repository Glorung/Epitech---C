/*
** btree_create_node.c for journee de merde in /home/gendro_v/rendu/piscine/Piscine_C_J13/ex_01
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct 14 13:26:53 2015 Vincent Gendron
** Last update Thu Oct 15 15:32:14 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"mylist.h"

t_btree		*btree_create_node(void *item)
{
  t_btree	*new;

  if ((new = malloc(sizeof(t_btree))) == NULL)
    return (NULL);
  new->left = NULL;
  new->right = NULL;
  new->item = item;
  return (new);
}
