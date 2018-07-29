/*
** my_str_isalpha.c for is_alpha in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_11
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 20:28:56 2015 Vincent Gendron
** Last update Tue Oct  6 22:31:10 2015 Vincent Gendron
*/

int		my_str_isprintable(char *str)
{
  int		i;

  i = 0;
  if (!str)
    return (1);
  while (str[i] >= 32 && str[i] <= 126 && str[i])
    i = i + 1;
  if ((str[i] >= 32 && str[i] <= 126) && str[i])
    return (1);
  else
    return (0);
}
