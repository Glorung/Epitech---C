/*
** main.h for my_select in /home/gendro_v/PSU_2015_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:47:50 2015 Vincent Gendron
** Last update Fri Nov 27 16:59:21 2015 Vincent Gendron
*/

#ifndef MAIN_H_
# define MAIN_H_

typedef struct		s_winconfig
{
  int			max_size;
  int			line_nbr;
  int			column_nbr;
  int			term_line_nbr;
  int			term_col_nbr;
}			t_winconfig;

void	del(t_list **list, struct termios *save);
void	selected(t_list **list);
void	prev(t_list **list);
void	next(t_list **list);
void	user_waiting(t_list **list, struct termios *save, t_winconfig *);
void	my_aff_custom(char *str, int format);
void	aff_interface(t_list **list);
void	my_put_tty(char *str);
void	my_report(t_list **list, struct termios *save);
void	displaywin(t_list **, t_winconfig *);
void	setup_win(t_list **, t_winconfig *, struct termios *);
void	windowconfig(t_winconfig *);

#endif /* !MAIN_H_ */
