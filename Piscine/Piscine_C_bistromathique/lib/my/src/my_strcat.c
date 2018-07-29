/*
** my_strcat.c for my_strcat in /home/parria_m/rendu/Piscine_C_J07
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct  6 10:05:57 2015 Maxime Parriaux
** Last update Thu Oct 22 22:51:24 2015 Maxime Parriaux
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	size;

  i = 0;
  size = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[size + i] = src[i];
      i = i + 1;
    }
  dest[size + i] = '\0';
  return (dest);
}
