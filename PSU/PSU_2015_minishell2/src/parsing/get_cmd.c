/*
** get_cmd.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:25:48 2015 Vincent Gendron
** Last update Mon Dec 21 18:12:18 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"list.h"
#include	"my.h"

char		**get_cmd()
{
  int		i;
  char		*str;
  char		**tab;

  if ((str = malloc(4096)) == NULL)
    return (NULL);
  if ((i = read(0, str, 4096)) < 0)
    return (NULL);
  str[i - 1] = '\0';
  printf("[%s]\n", str);
  if (str == NULL)
    return (NULL);
  printf("[%s]\n", str);
  str = epur_str(str);
    printf("[%s]\n", str);
  while (str && str[0] != '\0' && str[my_strlen(str) - 1] == ';')
    {
      str[my_strlen(str) - 1] = '\0';
    }
  printf("[%s]\n", str);
  str = epur_str(str);
  tab = NULL;
  if (str == NULL || str[0] == '\0')
    {
      tab = put_in_tab(tab, my_strdup(""));
      return (tab);
    }
  tab = my_strtotab(str, ';');
  return (tab);
}
