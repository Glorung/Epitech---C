/*
** gnl.c for gnl
** 
** 
** Started on  Thu Nov 19 10:22:28 2015 
** Last update Thu Nov 19 10:22:29 2015 
*/


#include <stdlib.h>
#include <unistd.h>
#include "gnl.h"

#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>

int	my_strlen(char *str)
{
  int	i;

  if (str == NULL)
    return (0);
  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

int	my_strdup_plus(char *str, int begin, int end)
{

}

char	*gnl_realloc_cat(char *str1, char *str2)
{
  char	*buff;
  int	i;
  int	j;

  i = 0;
  j = 0;
  buff = malloc(sizeof(char)*(my_strlen(str1) + my_strlen(str2) + 1));
  if (buff == NULL)
    return (0);
  while ((str1) && (str1[i]))
    {
      buff[i] = str1[i];
      i++;
    }
  while ((str2) && (str2[j]))
    {
      buff[i] = str2[j];
      i++;
      j++;
    }
  buff[i] = '\0';
  free(str1);
  return (buff);
}

char	*backerase(char **buffer2, int fd)
{
  int	i;
  char	*nextline;
  char	*rest;

  i = 0;
  while ((*buffer2)[i] != '\n')
    {
      if ((*buffer2)[i] == '\0')
	return (get_next_line(fd));
      i++;
    }
  (*buffer2)[i] = '\0';
  rest = gnl_realloc_cat(NULL, buffer2[0] + i + 1);
  nextline = gnl_realloc_cat(*buffer2, NULL);
  (*buffer2) = rest;
  return (nextline);
}

int	gnl_check_end(char *buffer2)
{
  int	i;

  i = 0;
  while (buffer2 && buffer2[i] != '\0')
    {
      if (buffer2[i] == '\n')
	return (1);
      i = i + 1;
    }
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	*buffer2 = NULL;
  char		buffer1[READLEN + 1];
  int		a;
  char		*replacer;

  if ((a = read(fd, &buffer1, READLEN)) <= 0)
    {
      if (buffer2 == NULL)
	return (NULL);
      else if (gnl_check_end(buffer2) == 0)
	{
	  replacer = buffer2;
	  buffer2 = NULL;
	  return (replacer);
	}
    }
  else
    {
      buffer1[a] = '\0';
      buffer2 = gnl_realloc_cat(buffer2, buffer1);
    }
  if ((buffer2!= NULL && buffer2[0]) == '\0')
    return (NULL);
  return (backerase(&buffer2, fd));
}

int		main()
{
  char		*str;
  int		fd;

  fd = open("alacon", O_RDONLY);
  while ((str = get_next_line(fd)) != NULL)
    {
      printf("[%s]\n", str);
    }
  return (0);
}
