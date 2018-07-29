/*
** my_strstr.c for my_strstr in /home/denizo_r/rendu/Piscine_C_J06
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct  5 11:52:51 2015 romain denizot
** Last update Tue Oct  6 15:22:50 2015 romain denizot
*/

#include <stdlib.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[0])
	{
	  j = 0;
	  while (to_find[j] == str[i + j])
	    {
	      if (to_find[j + 1] == '\0')
		return (str + i);
	      j = j + 1;
	    }
	}
      i = i + 1;
    }
  return (NULL);
}
