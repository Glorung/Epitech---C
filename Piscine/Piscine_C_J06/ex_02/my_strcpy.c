/*
** my_strcpy.c for strcpy in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_02
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 09:45:05 2015 Vincent Gendron
** Last update Mon Oct  5 09:52:05 2015 Vincent Gendron
*/

char		*my_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
