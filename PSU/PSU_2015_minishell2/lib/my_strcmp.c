/*
** my_strcmp.c for my_strcmp in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/lib
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:52:07 2015 Vincent Gendron
** Last update Sun Dec  6 20:52:07 2015 Vincent Gendron
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1[i] == '\0' || s2[i] == '\0')
    return (s1[i] - s2[i]);
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
      i = i + 1;
    }
  if (s1[i] > s2[i])
    return (1);
  if (s1[i] < s2[i])
    return (-1);
  return (0);
}
