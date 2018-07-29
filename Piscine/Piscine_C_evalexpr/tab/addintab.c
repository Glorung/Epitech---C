/*
** addintab.c for addintab in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_evalexpr/tab
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 20 15:56:50 2015 Vincent Gendron
** Last update Wed Oct 21 14:25:29 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"bistro.h"

char		**addintab(char **tab, int nb)
{
  char		**new_tab;
  int		i;
  int		j;

  if ((new_tab = malloc(sizeof(char *) * tablen(tab) + 1)) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (tab[i])
    {
      if (i == nb)
	{
	  new_tab[j] = tab[i];
	  j = j + 1;
	}
      new_tab[j] = tab[i];
      j = j + 1;
      i = i + 1;
    }
  new_tab[j] = NULL;
  free(tab);
  return (new_tab);
}
