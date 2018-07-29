/*
** get_next_line.h for get_next_line in /home/gendro_v/Dropbox/Epitech/Tek2d/CPE/CPE_2015_get_next_line
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Nov 29 23:06:12 2015 Vincent Gendron
** Last update Sun Nov 29 23:13:33 2015 Vincent Gendron
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#ifndef READ_SIZE
# define READ_SIZE 5120
#endif /* !READ_SIZE */

int	my_strlenn(char *);
char	*gnl_realloc_cat(char *, char *);
char	*gnl_remove_end(char **, int);
int	gnl_check_end(char *);
char	*get_next_line(const int);

#endif /* !GET_NEXT_LINE */
