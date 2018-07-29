/*
** libmy.h for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:34:30 2015 Vincent Gendron
** Last update Sun Nov 22 19:35:56 2015 Vincent Gendron
*/

#ifndef LIBMY_H_
# define LIBMY_H_

typedef struct	s_list
{
  char		*name;
  struct s_list	*next;
}		t_list;

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nbr);
char	*my_strdup(char *);
void	my_put_front(t_list **list, char *name);
int	my_put_in_list(t_list **list, int argc, char **argv);
void	free_list(t_list **list);
int	my_issame(char *str1, char *str2);
int	my_strlen(char *str);
int	count_char(char *str, char separator);
char	*str_copy(char *str1, char *str2);
char	**str_to_wordtab(char *str, char separator);
char	*reader(const int fd);
void	my_free_tab(char **tab);
t_list	*tri_list(t_list **);

#endif /* !LIBMY_H_ */
