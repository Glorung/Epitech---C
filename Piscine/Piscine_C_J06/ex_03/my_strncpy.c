/*
** my_strncpy.c for strncpy in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 09:51:09 2015 Vincent Gendron
** Last update Mon Oct  5 10:03:25 2015 Vincent Gendron
*/

char		*strncpy(char *dest, char *src, int n)
{
  int		i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
