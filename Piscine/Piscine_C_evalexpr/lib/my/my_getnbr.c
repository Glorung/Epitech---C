/*
** my_getnbr.c for get_nbr in /home/gendro_v/rendu/Piscine_C_J04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 13:38:23 2015 romain denizot
** Last update Thu Oct 22 14:48:21 2015 romain denizot
*/

int		check_my_getnbr(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i] == '+' || str[i] == '-')
    i = i + 1;
  while (str[i] >= '0' && str[i] <= '9')
    {
      i = i + 1;
      nb = nb + 1;
    }
  if (nb > 0 && nb < 10)
    return (1);
  return (0);
}

int		sign_my_getnbr(char *str)
{
  int		i;
  int		sign;

  i = 0;
  sign = 1;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	sign = sign * -1;
      i = i + 1;
    }
  return (sign);
}

int		my_getnbr(char *str)
{
  int		nb;
  int		pos;
  int		i;

  nb = 0;
  pos = 1;
  i = 0;
  if (check_my_getnbr(str) == 1)
    {
      while (str[i] == '+' || str[i] == '-')
	i = i + 1;
      while (str[i] >= '0' && str[i] <= '9')
	i = i + 1;
      while (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
	  nb = nb + ((str[i - 1] - '0') * pos);
	  pos = pos * 10;
	  i = i - 1;
	}
    }
  pos = sign_my_getnbr(str);
  nb = nb * pos;
  return (nb);
}
