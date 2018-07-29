/*
** my_strcmp.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 22:31:26 2015 Vincent Gendron
** Last update Sat Nov 21 22:43:00 2015 Vincent Gendron
*/

int		my_strcmp(char *str1, char *str2)
{
  int		i;

  i = 0;
  if (str1[0] == '\0' || str2[0] == '0')
    return (str1[0] - str2[0]);
  while (str1[i] != '\0' && str2[i] != '\0')
    {
      if (str1[i] != str2[i])
	{
	  if (str1[i] > str2[i])
	    return (1);
	  else if (str1[i] < str2[i])
	    return (-1);
	}
      i = i + 1;
    }
  if (str1[i] > str2[i])
    return (1);
  else if (str1[i] < str2[i])
    return (-1);
  return (0);
}
