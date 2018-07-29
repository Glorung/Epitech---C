/*
** my.h for my_printf in /home/gendro_v/PSU_2015_my_printf
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:41:12 2015 Vincent Gendron
** Last update Mon Nov 16 21:41:13 2015 Vincent Gendron
*/

#ifndef MY_H_
# define MY_H_

char		*my_strdup(char *);
char		*putcharinback(char *, char);
char		*putcharinfront(char *, char);
char		*putstrinback(char *, char *);
char		*puterror(char *);
char		*inttostring(int);
char		*uinttostring(unsigned int);
char		*longtostring(long);
char		*longlongtostring(long long);
void		my_putstr(char *);
int		my_strlen(char *);
char		**put_in_tab(char **, char *);
void		define_fct(char *(*fct[16])(va_list args));
char		**define_flag(char **);
void		free_tab(char **);
int		compare_flag(char *, char *);
char		*multinf(char *, char *);
char		*addinf(char *, char *);
char		*decimaltobase(char *, char *);
int		my_strcmp(char *, char *);
char		*infindiv(char *, char *);
char		*infinmodulo(char *, char *);
char		*my_revstr(char *);
int		is_neg(char *, char *);
char		*uinttobase(unsigned int, char *);
char		*longtobase(unsigned long, char *);

#endif /* !MY_H_ */
