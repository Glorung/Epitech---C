/*
** my.h for lib in /home/gendro_v/rendu/piscine/Piscine_C_J10/lib/my
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 12 11:16:41 2015 Vincent Gendron
** Last update Mon Oct 12 13:19:15 2015 Vincent Gendron
*/

#ifndef MY_H_
# define MY_H_

int		my_factorielle(int);
int		my_getnbr_base(char *, char *);
int		my_getnbr(char *);
void		my_isneg(int);
int		my_power(int, int);
void		my_putchar(char);
void		my_putnbr_base(int, char *);
void		my_put_nbr(int);
void		my_putstr(char *);
char		*revstr(char *);
int		my_square_root(int);
char		*my_strcapitalize(char *);
char		*my_strcat(char *, char *);
int		my_strcmp(char *, char *);
char		*my_strcpy(char *,  char *);
char		*my_strdup(char *);
int		my_str_isaplha(char *);
int		my_str_isnum(char *);
int		my_str_isprintable(char *);
int		my_strlen(char *);
char		*my_strlowercase(char *);
char		*my_strncat(char *, char *, int);
int		my_strncmp(char *, char *, int);
char		*my_strncpy(char *, char *, int);
char		*my_strstr(char *, char *);
char		*my_strupcase(char *);
void		my_swap(int *, int *);

#endif /* !MY_H_ */
