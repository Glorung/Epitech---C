/*
** is_nbr.c for bistro in /home/denizo_r/rendu/Bistro/Piscine_C_evalexpr
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Tue Oct 20 14:42:59 2015 romain denizot
** Last update Wed Oct 21 10:25:43 2015 romain denizot
*/

int	is_nbr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	return (1);
      i = i + 1;
    }
  return (0);
}
