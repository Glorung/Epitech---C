/*
** my_putstr.c for my_putstr.c in /home/denizo_r/rendu/Piscine_C_J04
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Thu Oct  1 09:53:08 2015 romain denizot
** Last update Tue Oct 13 19:30:22 2015 romain denizot
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0 || str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
