/*
** list.h for my_select in /home/gendro_v/PSU_2015_my_select/L_Linked_List
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:51:16 2015 Vincent Gendron
** Last update Thu Nov 26 15:51:17 2015 Vincent Gendron
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_list
{
  char		*name;
  int		selected;
  int		choosen;
  int		x;
  int		y;
  struct s_list	*next;
}		t_list;

int	my_put_in_list(t_list **list, int argc, char **argv);

#endif /* !LIST_H_ */
