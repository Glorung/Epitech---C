/*
** my_strcapitalize.c for strcapitalize in /home/gendro_v/rendu/piscine/Piscine_C_J06
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 17:22:51 2015 Vincent Gendron
** Last update Mon Oct 12 13:17:37 2015 Vincent Gendron
*/

char		*my_strcapitalize(char *str)
{
  int		i;
  int		maj;

  i =  -1;
  maj = 0;
  while (str[i])
    {
      if ((str[i] >= 'a' && str[i] <= 'z') ||
	  (str[i] >= '0' && str[i] <= '9') ||
	  (str[i] >= 'A' && str[i] <= 'Z'))
	{
	  if (str[i] >= 'a' && str[i] <= 'z')
	    str[i] = str[i] - 32;
	  if (str[i] >= 'A' && str[i] <= 'Z' && maj == 1)
	    str[i] = str[i] + 32;
	  maj = 1;
	}
      else
	maj = 0;
      i = i + 1;
    }
  return (str);
}
