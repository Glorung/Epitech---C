/*
** my_strlen.c for strlen in /home/gendro_v/rendu/Piscine_C_J04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 16:28:22 2015 Vincent Gendron
** Last update Thu Oct  1 16:29:03 2015 Vincent Gendron
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i - 1);
}
