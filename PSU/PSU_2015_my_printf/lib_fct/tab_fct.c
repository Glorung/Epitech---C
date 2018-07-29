/*
** tab_fct.c for my_printf in /home/gendro_v/PSU_2015_my_printf/lib_fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:32:39 2015 Vincent Gendron
** Last update Mon Nov 16 21:39:17 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>

#include	<stdio.h>
#include	"flags.h"
#include	"my.h"

void        free_tab(char **tab)
{
  int       i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}

char		**put_in_tab(char **tab, char *line)
{
  char      **new_tab;
  int       i;

  if (tab == NULL || tab[0] == NULL)
    {
      if ((tab = malloc(sizeof(char *) * 2)) == NULL)
	return (NULL);
      tab[0] = line;
      tab[1] = NULL;
      return (tab);
    }
  i = 0;
  while (tab && tab[i] != NULL)
    i = i + 1;
  if ((new_tab = malloc(sizeof(char *) * (i + 3))) == NULL)
    return (NULL);
  i = -1;
  while (tab[++i] != NULL)
    new_tab[i] = my_strdup(tab[i]);
  free_tab(tab);
  new_tab[i] = line;
  new_tab[i + 1] = NULL;
  return (new_tab);
}
