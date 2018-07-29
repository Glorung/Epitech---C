/*
** my_revstr.c for my_revstr in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 11:10:13 2015 Maxime Parriaux
** Last update Mon Oct 26 17:52:09 2015 Maxime Parriaux
*/

char	*my_revstr(char *str)
{
  char	tmp1;
  int	n;
  int	b;
  int	c;

  b = 0;
  n = my_strlen(str);
  c = n / 2;
  tmp1 = str[b];
  if (n == 1)
    return (str);
  while (n != c)
    {
      tmp1 = str[n - 1];
      str[n - 1] = str[b];
      str[b] = tmp1;
      b = b + 1;
      n = n - 1;
    }
  return (str);
}
