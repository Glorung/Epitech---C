/*
** main.h for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 22 19:14:03 2015 Vincent Gendron
** Last update Sun Nov 22 19:14:04 2015 Vincent Gendron
*/

#ifndef _MAIN_H_
# define _MAIN_H_

typedef struct	s_param
{
  int		option_l;
    int		option_r;
  int		option_r_maj;
  int		option_a;
  char		*path;
}		t_param;

void	error(int i, char *str);
void	get_arg(char *str, t_param *ptr);
void	get_date(char *path, char *name);
void	get_type(char *path, char *name);
void	get_name(char *path, char *name);
void	get_group(char *path, char *name);
void	get_right(char *path, char *name);
void	get_link(char *path, char *name);
void	get_size(char *path, char *name);
void	get_param(int argc, char **argv, t_param *param);
void	ls_r(t_list *list, t_param *param);
int	check_type(char *path, char *name);
void	init(t_param *ptr);
void	ls(t_param *param);

#endif /* !_MAIN_H_ */
