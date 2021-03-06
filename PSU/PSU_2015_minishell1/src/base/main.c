/*
** main.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 13:54:25 2015 Vincent Gendron
** Last update Sat Dec 19 22:51:57 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<signal.h>
#include	"list.h"
#include	"my.h"

/* check_build(tab[0]) == 1 ? build(list, cmd) : execute_cmd(list, cmd); */

void		ctrlc()
{
  my_putstr("\n>_");
}

void		prompt(t_env **list)
{
  char		*login;

  login = my_getenv(list, "LOGNAME");
  if (login == NULL)
    my_putstr(">_");
  else
    {
      my_putstr(login);
      my_putstr(" >_");
    }
}

int		shell(t_env **list)
{
  char		**cmd;
  int		i;

  prompt(list);
  cmd = get_cmd();
  if (cmd == NULL)
    return (0);
  i = -1;
  while (cmd[++i] != NULL)
    {
      cmd[i] = epur_str(cmd[i]);
      printf("Debug ; : [%d][%s]\n", i, cmd[i]);
      if (cmd[i] != NULL && cmd[i][0] != '\0')
	prepare_execution(cmd, list);
    }
  return (1);
}

int		main(int ac, char **av, char **env)
{
  t_env		*list;

  if (ac == 1)
    {
      list = NULL;
      fill_env(&list, env);
      signal(SIGINT, ctrlc);
      while (shell(&list));
    }
  av = av;
  return (0);
}
