/*
** my_strlen.c for my_strlen in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/lib
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 22:01:59 2015 Vincent Gendron
** Last update Sun Dec  6 22:02:26 2015 Vincent Gendron
*/

int		my_strlen(char *str)
{
  int		i;

  i = -1;
  while (str[++i]);
  return (i);
}
