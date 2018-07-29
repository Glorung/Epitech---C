/*
** tablen.c for tablen in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_evalexpr/tab
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 20 15:51:47 2015 Vincent Gendron
** Last update Tue Oct 20 16:38:04 2015 romain denizot
*/

#include <stdlib.h>

int		tablen(char **tab)
{
  int		i;

  if (tab == NULL)
    return (0);
  if (tab[0] == NULL)
    return (0);
  i = 0;
  while (tab[i] != NULL)
    i = i + 1;
  return (i);
}
