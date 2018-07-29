/*
** sizebtparenthesis.c for sizebtparenthesis.c in /home/maire-_n/rendu/Piscine_C_evalexpr
** 
** Made by Noé Maire-Amiot
** Login   <maire-_n@epitech.net>
** 
** Started on  Tue Oct 20 09:55:30 2015 Noé Maire-Amiot
** Last update Thu Oct 22 22:17:18 2015 Maxime Parriaux
*/

int	sizebtparenthesis(char *beginPar)
{
  int	i;

  i = 0;
  while (beginPar[i] != ')')
    i = i + 1;
  return (i + 1);
}
