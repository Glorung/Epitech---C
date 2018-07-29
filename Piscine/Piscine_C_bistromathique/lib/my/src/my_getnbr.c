/*
** my_getnbr.C for my_getnbr in /home/parria_m/rendu/Piscine_C_J04
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct  1 13:05:23 2015 Maxime Parriaux
** Last update Fri Oct  9 14:19:33 2015 Maxime Parriaux
*/

int	my_pow(int p)
{
  int	tmp;

  tmp = 1;
  while (p >= 1)
    {
      tmp = tmp * 10;
      p = p - 1;
    }
  return (tmp);
}

int	my_neg(char *str, int *first)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	count = count + 1;
      if (str[i] == '+')
	*first = *first + 1;
      i = i + 1;
    }
  *first = *first + count;
  if (count % 2 == 1)
    return (1);
  else
    return (0);
}

int	my_strlen_pos(char *str, int *start)
{
  int	n;
  int	boo;

  n = 0;
  boo = 0;
  while (str[n] != '\0')
    {
      if ((str[n] >= '0' && str[n] <= '9') && boo == 0)
	{
	  *start = n;
	  boo = 1;
	}
      if ((str[n] < '0' || str[n] > '9') && boo > 0)
	{
	  return (n - *start);
	}
      n = n + 1;
    }
  return (n - *start);
}

int	my_limit(char *str, int start, int neg)
{
  if (str[start + 0] > 2 + 48)
    return (1);
  if (str[start + 1] > 1 + 48)
    return (1);
  if (str[start + 2] > 4 + 48)
    return (1);
  if (str[start + 3] > 7 + 48)
    return (1);
  if (str[start + 4] > 4 + 48)
    return (1);
  if (str[start + 5] > 8 + 48)
    return (1);
  if (str[start + 6] > 3 + 48)
    return (1);
  if (str[start + 7] > 6 + 48)
    return (1);
  if (str[start + 8] > 4 + 48)
    return (1);
  if ((str[start + 9] > 7 + 48) && neg == 0)
    return (1);
  if ((str[start + 9] > 8 + 48) && neg == 1)
    return (1);
  return (0);
}

int	my_getnbr(char *str)
{
  int	nb;
  int	n;
  int	neg;
  int	lenght;
  int	i;

  nb = 0;
  n = 0;
  i = 0;
  neg = my_neg(str, &i);
  if ((*str < '0' || *str > '9') && *str != '-' && *str != '+')
    return (0);
  str = str + i;
  while (*str >= '0' && *str <= '9')
    {
      nb = (nb * 10) + (*str - 48);
      str = str + 1;
    }
  if (neg == 1)
    nb = nb * (-1);
  return (nb);
}
