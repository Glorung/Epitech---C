/*
** my_strlen.c for strlenm in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 18:06:07 2015 Vincent Gendron
** Last update Tue Oct 20 18:20:03 2015 Vincent Gendron
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
