/*
** gnl.h for gnl
** 
** 
** Started on  Thu Nov 19 10:22:42 2015 
** Last update Thu Nov 19 10:22:48 2015 
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_
# define READLEN 5120

int	my_strlenn(char *);
char	*realloc_cat(char *, char *);
char	*backerase(char **, int);
int	back_slash_checker(char *);
char	*get_next_line(const int);

#endif /* !GET_NEXT_LINE */
