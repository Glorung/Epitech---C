/*
** execute_cmd.c for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1/src
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Sun Dec  6 17:43:57 2015 Vincent Gendron
** Last update Sun Dec 20 22:54:19 2015 Vincent Gendron
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/wait.h>
#include	"list.h"
#include	"build.h"
#include	"my.h"

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
      check_build(tab[0]) == 1 ? build(list, tab) :  execute_cmd(list, tab);
      exit(0);
    }
}

int		exec_first_pipe(int stdin, int stdout, char *cmd, t_env **list)
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
      check_build(tab[0]) == 1 ? build(list, tab) :  execute_cmd(list, tab);
      exit(0);
    }
  close(stdout);
  return (stdin);
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
      check_build(tab[0]) == 1 ? build(list, tab) :  execute_cmd(list, tab);
      exit(0);
    }
  close(stdin);
  close(stdout);
}
