/*
** my_strlowercase.c for strlowercase in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_09
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 16:54:51 2015 Vincent Gendron
** Last update Tue Oct  6 22:22:10 2015 Vincent Gendron
*/

char		*my_strlowercase(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
