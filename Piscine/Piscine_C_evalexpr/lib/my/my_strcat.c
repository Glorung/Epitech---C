/*
** my_strcat.c for my_strcat in /home/denizo_r/rendu/Piscine_C_J07
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct  6 11:10:22 2015 romain denizot
** Last update Tue Oct 13 19:53:16 2015 romain denizot
*/

char*	my_strcat(char *dest, char *src)
{
  int	len;
  int	i;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[len + i] = src[i];
      i = i + 1;
    }
  dest[len + i] = '\0';
  return (dest);
}
