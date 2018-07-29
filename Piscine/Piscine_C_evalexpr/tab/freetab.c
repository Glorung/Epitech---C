/*
** freetab.c for freetab in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_evalexpr/tab
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 20 15:53:47 2015 Vincent Gendron
** Last update Tue Oct 20 16:35:08 2015 romain denizot
*/

#include <stdlib.h>

void		freetab(char **tab)
{
  int		i;

  if (tab == NULL)
    return ;
  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}
