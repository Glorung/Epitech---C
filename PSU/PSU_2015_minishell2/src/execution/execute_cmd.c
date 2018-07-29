/*
** execute_cmd.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 17:43:57 2015 Vincent Gendron
** Last update Sun Dec 20 23:25:59 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/wait.h>
#include	"list.h"
#include	"build.h"
#include	"my.h"

void		execute(t_env **list, char *cmd, char **cmd_param)
{
  int		pid;

  if (access(cmd, X_OK) == -1)
    my_putstr("shell: Permission denied\n");
  else
    {
      pid = fork();
      if (pid == 0)
	{
	  execve(cmd, cmd_param, env(list));
	  my_putstr("shell: Execution failed\n");
	  exit(-1);
	}
      else
	wait(0);
    }
}

void		execute_pipeless(char **cmd_by_pipe, t_env **list)
{
  char		**tab;
  int		j;

  cmd_by_pipe[0] = epur_str(cmd_by_pipe[0]);
  tab = my_strtotab(cmd_by_pipe[0], ' ');
  if (check_build(tab[0]) == 1)
    {
      if (my_strcmp("exit", tab[0]) == 0)
	build_exit(list, my_strtotab(cmd_by_pipe[0], ' '));
      if ((j = fork()) == -1)
	exit(-1);
      if (j == 0)
	build(list, tab);
      else
	wait(0);
    }
  else
    {
      execute_cmd(list, tab);
    }
}

void		execute_cmd(t_env **list, char **cmd)
{
  char		**path;
  char		*str;
  int		i;

  if (access(cmd[0], F_OK) != -1)
    execute(list, my_strdup(cmd[0]), cmd);
  else
    {
      if ((path = get_path(list)) == NULL)
	return (my_putstr("shell: Path missing\n"));
      i = 0;
      while (path[i] != NULL)
	{
	  str = my_strrealloc(path[i++], "/");
	  str = my_strrealloc(str, cmd[0]);
	  if (access(str, F_OK) != -1)
	    {
	      execute(list, str, cmd);
	      return ;
	    }
	  free(str);
	}
      my_putstr("shell: Command not found\n");
    }
}

void		prepare_pipe(char **cmd_by_pipe, t_env **list)
{
  int		pfd[2];
  int		prev;
  int		j;

  j = -1;
  while (cmd_by_pipe[++j] != NULL)
    {
      cmd_by_pipe[j] = epur_str(cmd_by_pipe[j]);
      if (my_strcmp("exit", my_strtotab(cmd_by_pipe[j], ' ')[0]) == 0)
	build_exit(list, my_strtotab(cmd_by_pipe[j], ' '));
      else if (cmd_by_pipe[j + 1] != NULL)
	pipe(pfd);
	if (j == 0)
	  prev = exec_first_pipe(pfd[0], pfd[1], cmd_by_pipe[j], list);
      else if (cmd_by_pipe[j + 1] == NULL)
	exec_last_pipe(pfd[0], pfd[1], cmd_by_pipe[j], list);
      else
	{
	  exec_pipe(prev, pfd[1], cmd_by_pipe[j], list);
	  close(prev);
	  close(pfd[1]);
	  prev = pfd[0];
	}
    }
}

void		prepare_execution(char **cmd, t_env **list)
{
  char		**cmd_by_pipe;
  int		pfd[2];
  int		i;
  int		j;
  int		prev;

  i = -1;
  while (cmd[++i] != NULL)
    {
      cmd_by_pipe = my_strtotab(cmd[i], '|');
      j = -1;
      if (cmd_by_pipe[1] != NULL)
	prepare_pipe(cmd_by_pipe, list);
      else
	execute_pipeless(cmd_by_pipe, list);
      j = -1;
      while (cmd_by_pipe[++j] != NULL)
	wait(NULL);
      wait(NULL);
    }
}

