/*
** btree.h for arbres binaires in /home/denizo_r/rendu/Piscine_C_J13
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct 14 09:50:49 2015 romain denizot
** Last update Thu Oct 22 14:45:00 2015 romain denizot
*/

#ifndef BISTRO_H_
# define BISTRO_H_

char	*res_init(char *res, int len);
char	*clean_res(char *res);
char	**part_calc(char *calc);
char	*next_operand(char **tabwd, int n);
char	**addintab(char **, int);
void	freetab(char **);
char	**removeintab(char **, int);
int	tablen(char **);
char	**remove_bracket(char **);
char	*remove_spaces(char *);
char	**calculation(char **);
char	*inttostring(int);
int	is_operand(char *);
int	is_nbr(char *);
int	tablen(char **);
int	eval_expr(char *);

#endif /* BITRO_H_ */
