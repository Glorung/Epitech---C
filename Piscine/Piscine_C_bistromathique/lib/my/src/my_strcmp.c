/*
** my_strcmp.c for my_strcmp in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 15:12:59 2015 Maxime Parriaux
** Last update Fri Oct  9 18:30:14 2015 Maxime Parriaux
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
