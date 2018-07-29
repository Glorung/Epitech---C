/*
** removeintab.c for removeintab in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_evalexpr
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 20 15:47:35 2015 Vincent Gendron
** Last update Wed Oct 21 14:43:38 2015 romain denizot
*/

#include	<stdlib.h>
#include	"bistro.h"

char		**removeintab(char **tab, int nb)
{
  char		**new_tab;
  int		i;
  int		j;

  if ((new_tab = malloc(sizeof(char *) * tablen(tab))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (tab[i] != NULL)
    {
      if (i != nb)
	{
	  new_tab[j] = tab[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  free(tab[nb]);
  free(tab);
  new_tab[j] = NULL;
  return (new_tab);
}
