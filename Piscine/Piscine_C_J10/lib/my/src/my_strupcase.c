/*
** my_strupcase.c for strupcase in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_08
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 16:52:40 2015 Vincent Gendron
** Last update Mon Oct 12 13:18:39 2015 Vincent Gendron
*/

char		*my_strupcase(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
