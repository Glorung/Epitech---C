/*
** my_strstr.c for strstr in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 13:54:01 2015 Vincent Gendron
** Last update Mon Oct  5 14:48:50 2015 Vincent Gendron
*/

char		*my_strstr(char *str, char *to_find)
{
  int		i;
  int		j;

  i = 0;
  while (str[i])   
    {
      if (str[i] == to_find[0])
	{
	  j = 0;
	  while (str[i + j] == to_find[j] || to_find[j] == '\0')
	    {
	      if (to_find[j] == '\0')
		return (str + i);
	      j = j + 1;
	    }
	}
      i = i + 1;
    }
  return (0);
}
