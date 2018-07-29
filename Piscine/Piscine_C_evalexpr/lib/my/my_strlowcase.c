/*
** my_strlowcase.c for my_strlowcase in /home/denizo_r/rendu/Piscine_C_J06/ex_09
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 16:11:58 2015 romain denizot
** Last update Tue Oct 13 20:01:45 2015 romain denizot
*/

char	*my_strlowcase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
