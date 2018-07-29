/*
** my_show_wordtab.c for salut in /home/gendro_v/rendu/piscine/Piscine_C_J08/ex_03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct  7 17:09:38 2015 Vincent Gendron
** Last update Wed Oct  7 17:14:05 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<stdlib.h>

void	putscreen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  write(1, str, i);
}

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      putscreen(tab[i]);
      putscreen("\n");
      i = i + 1;
    }
  return (i);
}
