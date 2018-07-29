/*
** my_strcpy.c for my_strcpy in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 09:26:04 2015 Maxime Parriaux
** Last update Mon Oct  5 09:40:49 2015 Maxime Parriaux
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  if (src[0] == 0)
    {
      dest[0] = '\0';
      return (dest);
    }
  i = 0;
  while (src[i] != 0)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
