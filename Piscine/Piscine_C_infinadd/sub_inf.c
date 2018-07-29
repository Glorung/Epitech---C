/*
** add_inf.c for add_inf.c in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 12:10:33 2015 Vincent Gendron
** Last update Mon Oct 19 18:51:09 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<string.h>
#include	<stdio.h>
#include	"infinadd.h"

char		*sub_inf(char *nb1, char *nb2)
{
  int		nbr[3];
  int		i;
  char		*str;

  nbr[0] = my_strlen(nb1) - 1;
  nbr[1] = my_strlen(nb2) - 1;
  nbr[2] = 0;
  str = NULL;
  while (nbr[0] != -1 || nbr[1] != -1 || nbr[2] != 0)
    {
      i = get_chiffre(nb1[nbr[0]]) - get_chiffre(nb2[nbr[1]]) - nbr[2];
      nbr[2] = 0;
      if (i < 0)
	{
	  i = i + 10;
	  nbr[2] = nbr[2] + 1;
	}
      if ((str = str_putcharinfront(str, (i + '0'))) == NULL)
	return (NULL);
      if (nbr[0] != -1)
	nbr[0] = nbr[0] - 1;
      if (nbr[1] != -1)
	nbr[1] = nbr[1] - 1;
    }
 return (str);
}
