/*
** get_cmd.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 20:25:48 2015 Vincent Gendron
** Last update Fri Dec 18 13:28:11 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"list.h"
#include	"my.h"

char		**get_cmd()
{
  char		*str;
  char		**tab;

  str = get_next_line(0);
  if (str == NULL)
    return (NULL);
  str = epur_str(str);
  tab = NULL;
  if (str == NULL)
    {
      tab = put_in_tab(tab, my_strdup(""));
      return (tab);
    }
  tab = my_strtotab(str, ';');
  return (tab);
}
