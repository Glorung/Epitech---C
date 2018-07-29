/*
** my_evil_str.c for evil in /home/gendro_v/rendu/Piscine_C_J04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 16:30:46 2015 Vincent Gendron
** Last update Thu Oct  1 16:45:10 2015 Vincent Gendron
*/

char		*my_evil_str(char *str)
{
  char		lol;
  int		i;
  int		j;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  j = i - 1;
  i = 0;
  while (i < j)
    {
      lol = str[i];
      str[i] = str[j];
      str[j] = lol;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
