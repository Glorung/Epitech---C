/*
** my_strncat.c for my_strncat in /home/denizo_r/rendu/Piscine_C_J07/ex_03
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct  6 11:50:13 2015 romain denizot
** Last update Wed Oct  7 21:39:30 2015 romain denizot
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int   len;
  int   i;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0' && i < nb)
    {
      dest[len + i] = src[i];
      i = i + 1;
    }
  dest[len + i] = '\0';
  return (dest);
}
