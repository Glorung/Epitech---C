/*
** findparenthesis.c for findparenthesis in /home/parria_m/rendu/Piscine_C_evalexpr
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct 20 09:56:38 2015 Maxime Parriaux
** Last update Thu Oct 22 23:53:19 2015 Maxime Parriaux
*/

char	*findparenthesis(char *str)
{
  while (*str != ')')
    str = str + 1;
  while (*str != '(')
    str = str - 1;
  return (str);
}
