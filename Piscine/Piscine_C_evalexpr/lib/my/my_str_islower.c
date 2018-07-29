/*
** my_str_islower.c for my_str_islower in /home/denizo_r/rendu/Piscine_C_J06/ex_13
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 18:12:58 2015 romain denizot
** Last update Tue Oct  6 15:18:09 2015 romain denizot
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'a' || str[i] > 'z')
        return (0);
      i = i + 1;
    }
  return (1);
}
