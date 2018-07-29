/*
** reader.c for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sat Nov 21 12:09:25 2015 Vincent Gendron
** Last update Sat Nov 21 12:09:26 2015 Vincent Gendron
*/

#include <stdlib.h>
#include "libmy.h"

int	has_return(char *str, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      if (str[i] == '\n')
	return (1);
      i++;
    }
  return (0);
}

char	*append_str(char *str1, char *str2, int *s1, int s2)
{
  char	*cmd;
  int	i;
  int	j;

  if ((cmd = malloc(sizeof(*cmd) * ((*s1) + s2 + 1))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (j < (*s1))
    cmd[i++] = str1[j++];
  j = 0;
  while (j < s2)
    cmd[i++] = str2[j++];
  cmd[i - 1] = '\0';
  (*s1) = i;
  if ((*s1) != 0)
    free(str1);
  free(str2);
  return (cmd);
}

char	*reader(const int fd)
{
  char	*cmd;
  int	cmd_size;
  char	*buff;
  int	ret;
  int	stop;

  stop = 0;
  cmd_size = 0;
  cmd = NULL;
  while (stop == 0)
    {
      if ((buff = malloc(sizeof(*buff) * 1024)) == NULL)
	return (NULL);
      if ((ret = read(fd, buff, 1024)) == -1)
	return (NULL);
      if (ret == 0 && cmd == NULL)
	{
	  free(buff);
	  return (NULL);
	}
      stop = has_return(buff, ret) || stop;
      if ((cmd = append_str(cmd, buff, &cmd_size, ret)) == NULL)
	return (NULL);
    }
  return (cmd);
}
