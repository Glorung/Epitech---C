/*
** btree_insert_data.c for ca marchait avant :( in /home/gendro_v/rendu/piscine/Piscine_C_J13
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct 14 15:04:18 2015 Vincent Gendron
** Last update Wed Oct 14 15:45:17 2015 Vincent Gendron
*/

void		btree_instert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
  t_btree	*tmp;

  tmp = *root;
  if (tmp == NULL)
    tmp->data = btree_create_node(item);
  else if (cmpf(item, tmp->left) <= 0)
    btree_insert_data(tmp->left, item, cmpf);
  else
    btree_insert_data(tmp->right, item, cmpf);
}
