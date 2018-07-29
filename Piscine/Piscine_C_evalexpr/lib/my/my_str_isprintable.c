/*
** my_str_isprintable.c for my_str_isprintable in /home/denizo_r/rendu/Piscine_C_J06/ex_15
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 19:18:44 2015 romain denizot
** Last update Tue Oct 13 19:58:35 2015 romain denizot
*/

int	my_str_isprintable(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
        return (0);
      i = i + 1;
    }
  return (1);
}
