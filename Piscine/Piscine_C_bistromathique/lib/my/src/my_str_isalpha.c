/*
** my_str_isalpha.c for my_str_isalpha in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 17:09:44 2015 Maxime Parriaux
** Last update Tue Oct  6 19:07:52 2015 Maxime Parriaux
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'A' || str[i] > 'Z')
	if (str[i] < 'a' || str[i] > 'z')
	  return (0);
      i = i + 1;
    }
  return (1);
}
