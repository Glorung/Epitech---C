/*
** execute_cmd.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 17:43:57 2015 Vincent Gendron
** Last update Sat Dec 19 23:25:08 2015 Vincent Gendron
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
	{
	  while (cmd_by_pipe[++j])
	    {
	      cmd_by_pipe[j] = epur_str(cmd_by_pipe[j]);
	      if (j == 0)
		{
		  pipe(pfd);
		  exec_first_pipe(pfd[0], pfd[1], cmd_by_pipe[j], list);
		  close(pfd[1]);
		  prev = pfd[0];
		}
	      else if (cmd_by_pipe[j + 1] == NULL)
		{
		  exec_last_pipe(pfd[0], pfd[1], cmd_by_pipe[j], list);
		  close(pfd[0]);
		  close(pfd[1]);
		}
	      else
		{
		  pipe(pfd);
		  exec_pipe(prev, pfd[1], cmd_by_pipe[j], list);
		  close(prev);
		  close(pfd[1]);
		  prev = pfd[0];
		}
	    }
	  j = -1;
	  while (cmd_by_pipe[++j] != NULL)
	    wait(NULL);
	  wait(NULL);
	}
      else
	{
	  char		**tab;
	  cmd_by_pipe[0] = epur_str(cmd_by_pipe[0]);
	  tab = my_strtotab(cmd_by_pipe[0], ' ');
	  execute_cmd(list, tab);
	}
    }
}


void		exec_pipe(int stdin, int stdout, char *cmd, t_env **list)
{
  int		pid;
  int		status;
  char		**tab;

  pid = fork();
  if (pid == 0)
    {
      tab = my_strtotab(cmd, ' ');
      dup2(stdin, 0);
      dup2(stdout, 1);
      close(stdin);
      close(stdout);
      execute_cmd(list, tab);
      exit(0);
    }
}

void		exec_first_pipe(int stdin, int stdout, char *cmd, t_env **list)
{
  int		pid;
  int		status;
  char		**tab;

  pid = fork();
  if (pid == 0)
    {
      tab = my_strtotab(cmd, ' ');
      dup2(stdout, 1);
      close(stdout);
      close(stdin);
      execute_cmd(list, tab);
      exit(0);
    }
}

void		exec_last_pipe(int stdin, int stdout, char *cmd, t_env **list)
{
  int		pid;
  int		status;
  char		**tab;

  pid = fork();
  if (pid == 0)
    {
      tab = my_strtotab(cmd, ' ');
      dup2(stdin, 0);
      close(stdin);
      close(stdout);
      execute_cmd(list, tab);
      exit(0);
    }
}

/* 	  check_build(tab[0]) == 1 ? build(list, tab) : execute_cmd(list, tab); */
