/*
** list.h for list in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/include
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 14:41:50 2015 Vincent Gendron
** Last update Fri Dec 18 04:20:59 2015 Vincent Gendron
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct		s_cmd
{
  char			*cmd_catch;
  char			**pipe;
  struct s_env		*next;
}			t_cmd;

typedef struct		s_env
{
  char			*name;
  char			*value;
  struct s_env		*next;
}			t_env;

#endif /* !LIST_H_ */
