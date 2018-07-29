/*
** my_strncmp.c for my_strncmp in /home/denizo_r/rendu/Piscine_C_J06/ex_07
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 14:14:05 2015 romain denizot
** Last update Tue Oct  6 15:23:28 2015 romain denizot
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
      if (s1[i] > s2[i])
        return (1);
      if (s1[i] < s2[i])
        return (-1);
      i = i + 1;
    }
  return (s1[n - 1] - s2[n - 1]);
}
