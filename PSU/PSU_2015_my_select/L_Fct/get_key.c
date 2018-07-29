/*
** get_key.c for my_select in /home/gendro_v/PSU_2014_my_select
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Jan 11 15:27:32 2015 Vincent Gendron
** Last update Fri Nov 27 16:56:40 2015 Vincent Gendron
*/

#include <unistd.h>
#include <stdlib.h>

int	get_key()
{
  int	length;
  int	return_value;
  int	i;
  char	key[4];

  i = 0;
  return_value = 0;
  length = read(0, key, 4);
  while (i < length)
    {
      return_value = return_value + key[i] << 8;
      i = i + 1;
    }
  return (return_value);
}
