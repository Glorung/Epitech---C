/*
** my_evil_str.c for my_evil_str in /home/denizo_r/rendu/Piscine_C_J04
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Thu Oct  1 13:07:06 2015 romain denizot
** Last update Mon Oct  5 11:51:58 2015 romain denizot
*/

char	*my_revstr(char *str)
{
  int	len;
  int	i;
  char	save;
  char	save2;

  len = my_strlen(str);
    i = 0;
  while (i < (len / 2))
    {
      save = str[i];
      save2  = str [(len - i) - 1];
      *(str + i) = save2;
      str[(len - i) - 1] = save;
      i = i + 1;
    }
  return (str);
}
