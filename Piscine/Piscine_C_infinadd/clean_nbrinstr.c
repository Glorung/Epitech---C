/*
** clean_nbr.c for infin_add in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 10:15:03 2015 Vincent Gendron
** Last update Tue Oct 20 18:17:18 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"infinadd.h"

int		get_sign(char *str)
{
  int		sign;
  int		i;

  sign = 1;
  i = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	sign = sign * (-1);
      i = i + 1;
    }
  return (sign);
}

char		*clean_nbrinstr(char *str)
{
  int		i;
  int		j;
  char		*tmp_str;

  if ((tmp_str = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  i = 0;
  if (get_sign(str) == -1)
    {
      i = 1;
      tmp_str[0] = '-';
    }
  j = 0;
  while (str[j] == '-' || str[j] == '+' || str[j] == '0')
    j = j + 1;
  while (str[j])
    {
      tmp_str[i] = str[j];
      i = i + 1;
      j = j + 1;
    }
  tmp_str[i] = '\0';
  my_strcpy(str, tmp_str);
  free(tmp_str);
  return (str);
}
