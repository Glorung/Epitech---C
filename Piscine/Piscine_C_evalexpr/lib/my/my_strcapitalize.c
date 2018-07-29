/*
** my_strcapitalize.c for my_capitalize in /home/denizo_r/rendu/Piscine_C_J06
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 16:21:51 2015 romain denizot
** Last update Tue Oct  6 15:57:26 2015 romain denizot
*/

char	*my_strcapitalize(char *str)
{
  int   i;
  int	flag;

  i = 0;
  flag = 0;
  while (str[i] != '\0')
    {
      if (flag == 0 && ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')))
	{
	  flag = 1;
	  if (str[i] >= 'a' && str[i] <= 'z')
	    str[i] = str[i] - 32;
	}
      else
	flag = 0;
      i = i + 1;
    }
  return (str);
}
