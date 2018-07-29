/*
** my_str_isalpha.c for my_str_isalpha in /home/denizo_r/rendu/Piscine_C_J06/ex_11
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 17:46:03 2015 romain denizot
** Last update Tue Oct 13 19:57:24 2015 romain denizot
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
	return (0);
      i = i + 1;
    }
  return (1);
}
