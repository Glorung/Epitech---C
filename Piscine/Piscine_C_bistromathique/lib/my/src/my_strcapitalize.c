/*
** my_strcapitalize.c for my_strcapitalize in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 16:13:41 2015 Maxime Parriaux
** Last update Tue Oct  6 20:53:32 2015 Maxime Parriaux
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 'Z' && str[i] >= 'A')
        str[i] = str[i] + 32;
      i++;
    }
  i = 0;
  if (str[i] >= 'a' && str[i] <= 'z')
    str[i] = str[i] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a' || str[i] > 'z') && (str[i] < '0' || str[i] > '9')
	  && (str[i] < 'A' || str[i] > 'Z')
	  && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
	str[i + 1] = str[i + 1] - 32;
      i = i + 1;
    }
  return (str);
}
