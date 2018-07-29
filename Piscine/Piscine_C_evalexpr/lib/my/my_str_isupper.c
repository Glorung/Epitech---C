/*
** my_str_isupper.c for my_str_isupper in /home/denizo_r/rendu/Piscine_C_J06
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 18:16:46 2015 romain denizot
** Last update Tue Oct 13 19:58:53 2015 romain denizot
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'A' || str[i] > 'Z')
        return (0);
      i = i + 1;
    }
  return (1);
}
