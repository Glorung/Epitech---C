/*
** my_getnbr_base.c for my_getnbr_base in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct  6 00:04:52 2015 Maxime Parriaux
** Last update Tue Oct  6 01:34:58 2015 Maxime Parriaux
*/

int	base_ok(char *base)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  while (base[i] != '\0')
    {
      while (base[j] != '\0')
	{
	  if (base[i] == base[j])
	    return (0);
	  j = j + 1;
	}
      i = i + 1;
      j = i + 1;
    }
  return (1);
}

int	str_ok(char *str, int *neg, char *base)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      while (str[i] != base[j] && str[i] != '-' && str[i] != '+')
	{
	  if (base[j] == '\0')
	    return (0);
	  j = j + 1;
	}
      j = 0;
      if (str[i] == '-')
	*neg = *neg + 1;
      i = i + 1;
    }
  if (*neg % 2 == 1)
    *neg = 1;
  return (1);
}

int	value(char c, char *base)
{
  int	i;

  i = 0;
  while (base[i] != c)
    i = i + 1;
  return (i);
}

int	get_nbr(char *str, char *base)
{
  int	i;
  int	nbr;
  int	size;
  int	pow;

  i = 0;
  nbr = 0;
  size = my_strlen(base);
  pow = my_strlen(str) - 1;
  while (str[i] != '\0')
    {
      nbr = nbr + value(str[i], base) * my_power_rec(size, pow - i);
      i = i + 1;
    }
  return (nbr);
}

int	my_getnbr_base(char *str, char *base)
{
  int	neg;
  int	*ptr;
  int	tmp;

  neg = 0;
  ptr = &neg;
  if (str[0] == '\0' || base[0] == '\0' || base[1] == '\0'
      || base_ok(base) == 0 || str_ok(str, ptr, base) == 0
      || find_first_base(str, base) == -1)
    return (0);
  tmp = find_first_base(str, base);
  tmp = get_nbr(str + tmp, base);
  if (neg == 1)
    tmp = tmp * -1;
  return (tmp);
}
