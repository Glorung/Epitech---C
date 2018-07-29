/*
** my_strncmp.c for strncmp in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_07
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 16:12:35 2015 Vincent Gendron
** Last update Mon Oct  5 16:41:45 2015 Vincent Gendron
*/

int		my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
    i = i + 1;
  if (s1[i] == s2[i])
    return (0);
  else
    return (s1[i] - s2[i]);
}
