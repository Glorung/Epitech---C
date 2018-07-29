/*
** my_strcpy.c for my_strcpy in /home/denizo_r/rendu/Piscine_C_J06
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 09:22:12 2015 romain denizot
** Last update Tue Oct 13 19:56:07 2015 romain denizot
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
