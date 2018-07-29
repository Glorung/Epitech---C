/*
** get_path.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 21:22:30 2015 Vincent Gendron
** Last update Sun Dec  6 21:45:04 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

char		**get_path(t_env **list)
{
  char		*str;
  char		**tab;

  str = my_getenv(list, "PATH");
  if (str == NULL)
    return (NULL);
  tab = my_strtotab(str, ':');
  if (tab == NULL)
    return (NULL);
  return (tab);
}
