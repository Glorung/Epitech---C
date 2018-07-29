/*
** my_strstr.c for my_strstr in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Mon Oct  5 12:51:14 2015 Maxime Parriaux
** Last update Tue Oct  6 20:35:01 2015 Maxime Parriaux
*/

int	is_ok(char *str, char *find, int n)
{
  int	i;
  int	j;

  j = 0;
  i = n;
  if (str[i] == find[j])
    {
      while (str[i] == find[j])
	{
	  i = i + 1;
	  j = j + 1;
	  if (find[j] == '\0')
	    return (1);
	}
    }
  return (0);
}

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  if (to_find[i] == '\0')
    return (str);
  while (str[i] != '\0')
    {
      if (is_ok(str, to_find, i) == 1)
	return (str + i);
      i = i + 1;
    }
  return (0);
}
