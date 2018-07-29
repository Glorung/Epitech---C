/*
** my_strcmp.c for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Nov 26 15:50:35 2015 Vincent Gendron
** Last update Thu Nov 26 15:50:39 2015 Vincent Gendron
*/

int	my_strcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  while (str1[i] && str2[i])
    {
      if (str1[i] == str2[i])
	i = i + 1;
      else
	return (-1);
    }
  return (0);
}
