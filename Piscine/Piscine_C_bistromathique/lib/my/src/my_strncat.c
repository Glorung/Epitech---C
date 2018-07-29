/*
** my_strncat.c for my_strncat in /home/parria_m/rendu/Piscine_C_J07
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct  6 10:05:57 2015 Maxime Parriaux
** Last update Tue Oct  6 10:40:01 2015 Maxime Parriaux
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	size;

  i = 0;
  size = my_strlen(dest);
  while (src[i] != '\0' && i < nb)
    {
      dest[size + i] = src[i];
      i = i + 1;
    }
  dest[size + i] = '\0';
  return (dest);
}
