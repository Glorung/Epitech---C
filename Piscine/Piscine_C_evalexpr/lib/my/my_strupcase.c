/*
** my_strupcase.c for my_strupcase in /home/denizo_r/rendu/Piscine_C_J06/ex_08
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 15:10:38 2015 romain denizot
** Last update Mon Oct  5 16:05:29 2015 romain denizot
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
