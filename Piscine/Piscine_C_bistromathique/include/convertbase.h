/*
** convertbase.h for lol in /home/gendro_v/Epitech/test/convert_entry/epitriche
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct 28 00:46:30 2015 Vincent Gendron
** Last update Wed Oct 28 17:06:56 2015 Maxime Parriaux
*/

#ifndef CONVERTBASE_H_
# define CONVERTBASE_H_

char	*str_putcharinback(char *str, char c);
char	*str_putcharinfront(char *, char);
char	*inttostring(int);
int	isinstr(char *, char);
char	*basetodecimal(char *nb, char *base);
char	*convert_base(char *, char *, char *);
char	*entryconvert(char *, char **);
int	entrycheck(int, char **);
char	*str_putstrinback(char *, char *);
char	*decimaltobase(char *, char *);

#endif /* !CONVERTBASE_H_ */
