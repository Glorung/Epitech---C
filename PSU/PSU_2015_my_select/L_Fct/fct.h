/*
** fct.h for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:49:08 2015 Vincent Gendron
** Last update Thu Nov 26 15:55:40 2015 Vincent Gendron
*/

#ifndef FCT_H_
# define FCT_H_

int	my_putchint(int c);
void	my_putstr(char *str);
void	my_putstr_inv(char *str);
void	my_putstr_soul(char *str);
void	my_putstr_combine(char *str);
int	free_screen();
int	get_key();
char	*my_getenv(char **env);
int	my_strcmp(char *str1, char *str2);
int	raw_mode(struct termios *t);
int	raw_mode_end(struct termios *save);
int	my_strlen(char *);
int	str_length(char *str);

#endif /* !FCT_H_ */
