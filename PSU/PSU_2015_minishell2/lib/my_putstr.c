/*
** my_putstr.c for putstr in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/lib
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:24:23 2015 Vincent Gendron
** Last update Sun Dec  6 22:07:49 2015 Vincent Gendron
*/

#include	<unistd.h>

void		my_putstr(char *str)
{
  int		i;

  i = -1;
  while (str[++i]);
  write(1, str, i);
}
