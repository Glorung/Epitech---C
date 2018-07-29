/*
** my_strlcat.c for my_strlcat in /home/parria_m/rendu/Piscine_C_J07
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct  6 22:17:51 2015 Maxime Parriaux
** Last update Thu Oct  8 01:38:49 2015 Maxime Parriaux
*/

void	cp_string(char **de, char **sr, char *dest, char *src)
{
  *de = dest;
  *sr = src;
}

int	cat_string(int n, char *d, char *s)
{
  int	i;

  i = 0;
  while (*s != '\0')
    {
      if (n != 1)
        {
          *d = *s;
          d = d + 1;
          n = n - 1;
        }
      i = i + 1;
      s = s + 1;
    }
  *d = '\0';
  return (i);
}

int	my_strlcat(char *dest, char *src, int size)
{
  char	*d;
  char	*s;
  int	n;
  int	dlenght;

  n = size;
  cp_string(&d, &s, dest, src);
  while (n != 0 && *d != '\0')
    {
      d = d + 1;
      n = n + 1;
    }
  dlenght = d - dest;
  n = size - dlenght;
  if (n <= 0)
    return (size + my_strlen(s));
  return (dlenght + (cat_string(n, d, s)));
}
