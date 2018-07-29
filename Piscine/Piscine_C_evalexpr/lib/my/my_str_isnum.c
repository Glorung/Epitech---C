/*
** my_str_isnum.c for my_str_isnbr in /home/denizo_r/rendu/Piscine_C_J06/ex_12
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 18:01:35 2015 romain denizot
** Last update Tue Oct 13 19:57:46 2015 romain denizot
*/

int	my_str_isnbr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
        return (0);
      i = i + 1;
    }
  return (1);
}
