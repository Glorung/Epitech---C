/*
** my_strlen.c for lib in /home/gendro_v/rendu/piscine/Piscine_C_J10/lib/my/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 12 11:01:30 2015 Vincent Gendron
** Last update Mon Oct 12 11:02:05 2015 Vincent Gendron
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
