/*
** remove_spaces.c for removespaces in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_evalexpr
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Oct 21 11:41:18 2015 Vincent Gendron
** Last update Wed Oct 21 14:28:05 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"my.h"

char		*remove_spaces(char *str)
{
  char		*new;
  int		i;
  int		j;

  if ((new = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] != ' ')
	{
	  new[j] = str[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  new[j] = '\0';
  return (new);
}
