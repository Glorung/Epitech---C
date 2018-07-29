/*
** infinadd.h for infinadd in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 11:49:15 2015 Vincent Gendron
** Last update Tue Oct 20 17:57:10 2015 Vincent Gendron
*/

#ifndef INFINADD_H_
# define INFINADD_H_

char		*clean_nbrinstr(char *str);
char		*str_putcharinfront(char *, char);
char		*sub_check(char *, char *);
char		*add_inf(char *, char *);
char		*sub_inf(char *, char *);
int		my_strlen(char *);
int		my_isnbr(char *);
void		my_putchar(char);
int		get_chiffre(char);
char		*my_strcpy(char *, char *);
void		my_putstr(char *);
int		my_strcmp(char *, char *);

#endif /* INFINADD_H_ */
