/*
** env.c for minishell in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 21:04:05 2015 Vincent Gendron
** Last update Tue Dec 15 16:40:00 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	"list.h"
#include	"my.h"

char		**env(t_env **list)
{
  char		*str;
  t_env		*tmp;
  char		**tab;

  tmp = *list;
  tab = NULL;
  while (tmp != NULL)
    {
      str = my_strrealloc(tmp->name, "=");
      str = my_strrealloc(str, tmp->value);
      tab = put_in_tab(tab, str);
      tmp = tmp->next;
    }
  return (tab);
}
