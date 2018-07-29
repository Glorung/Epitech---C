/*
** str_length.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:50:50 2015 Vincent Gendron
** Last update Thu Nov 26 15:50:50 2015 Vincent Gendron
*/

int	str_length(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
