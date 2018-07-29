/*
** my_strcat.c for strcat in /home/gendro_v/rendu/piscine/Piscine_C_J07/ex_02
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct  6 10:15:50 2015 Vincent Gendron
** Last update Wed Oct  7 11:23:18 2015 Vincent Gendron
*/

char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		j;

  i = 0;
  while (dest[i])
    i = i + 1;
  j  = 0;
  while (src[j])
    {
      dest[i + j] = src[j];
      j = j + 1;
    }
  dest[i + j] = '\0';
  return (dest);
}
