/*
** my_strcmp.c for strcmp in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct 20 17:48:41 2015 Vincent Gendron
** Last update Tue Oct 20 17:50:28 2015 Vincent Gendron
*/

int		my_strcmp(char *str1, char *str2)
{
  int		i;

  i = 0;
  while (str1[i] || str2[i])
    {
      if (str1[i] > str2[i])
	return (1);
      if (str1[i] < str2[i])
	return (-1);
      i = i +1;
    }
  return (str1[i] - str2[i]);
}
