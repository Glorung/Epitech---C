/*
** my_putstr.c for putstr in /home/gendro_v/rendu/Piscine_C_J04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 16:25:14 2015 Vincent Gendron
** Last update Fri Oct  2 17:03:05 2015 Vincent Gendron
*/

int	my_putstr(char *str)
{
  int	i;

  if (str)
    {
      i = 0;
      while (str[i] != '\0')
	i = i + 1;
      write (1, str, i);
    }
  return (0);
}
