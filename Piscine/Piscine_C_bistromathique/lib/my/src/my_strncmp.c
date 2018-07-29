/*
** my_strncmp.c for my_strncmp in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 15:12:59 2015 Maxime Parriaux
** Last update Fri Oct  9 22:20:03 2015 Maxime Parriaux
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  if ((s1[i] != '\0' || s2[i] == '\0'))
    return (s1[i] - s2[i]);
  while (s1[i] != '\0' && i < n)
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
