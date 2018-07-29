/*
** my_strcmp.c for my_strcmp in /home/denizo_r/rendu/Piscine_C_J06/ex_06
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 13:44:38 2015 romain denizot
** Last update Tue Oct 13 19:54:19 2015 romain denizot
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
      i = i + 1;
    }
  return (s1[i] - s2[i]);
}
