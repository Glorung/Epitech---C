/*
** my_strncpy.c for my_strncpy in /home/denizo_r/rendu/Piscine_C_J06
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 09:47:30 2015 romain denizot
** Last update Tue Oct  6 15:26:30 2015 romain denizot
*/

char	*my_strncpy(char* dest, char* src, int n)
{
  int   i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
