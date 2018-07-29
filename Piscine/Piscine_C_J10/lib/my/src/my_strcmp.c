/*
** my_strcmp.c for strcmp in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_06
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 15:24:28 2015 Vincent Gendron
** Last update Mon Oct  5 16:02:47 2015 Vincent Gendron
*/

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] != s2[i])
	{
	  if (s1[i] < s2[i])
	    return (s1[i] - s2[i]);
	  if (s1[i] > s2[i])
	    return (s1[i] - s2[i]);
	}
    }
  return (0);
}
