/*
** my_str_islower.c for my_str_islower in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 17:09:44 2015 Maxime Parriaux
** Last update Mon Oct  5 17:48:05 2015 Maxime Parriaux
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
