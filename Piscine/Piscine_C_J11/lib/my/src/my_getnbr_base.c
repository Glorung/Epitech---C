/*
** my_getnbr_base.c for getnbr_base in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_17
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 22:24:48 2015 Vincent Gendron
** Last update Tue Oct  6 21:05:34 2015 Vincent Gendron
*/

int		is_in_str(char c, char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (i);
      i = i + 1;
    }
  return (-1);
}

int		check_my_getnbr_base(char *str, char *base)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i] == '+' || str[i] == '-')
    i = i + 1;
  while (is_in_str(str[i], base) != -1 && i == (i = i + 1))
    nb = nb + 1;
  i = 0;
  if (nb < 1)
    return (0);
  nb = 0;
  while (base[nb])
    {
      i = -1;
      while (i == (i = i + 1) && base[i])
	if (base[nb] == base[i] && nb != i)
	  return (0);
      nb = nb + 1;
    }
  if (i < 2)
    return (0);
  return (1);
}

int		sign_my_getnbr_base(char *str)
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

int		my_getnbr_base(char *str, char *base)
{
  int		nb;
  int		pos;
  int		i;
  int		base_len;

  nb = 0;
  pos = 1;
  base_len = 0;
  while (base[base_len])
    base_len = base_len + 1;
  if (i == (i = 0) && check_my_getnbr_base(str, base) == 0)
    return (0);
  while (str[i] == '+' || str[i] == '-')
    i = i + 1;
  while (is_in_str(str[i], base) != -1)
    i = i + 1;
  while (is_in_str(str[i - 1], base) != -1)
    {
      nb = nb + (is_in_str(str[i - 1], base) * pos);
      pos = pos * base_len;
      i = i - 1;
    }
  pos = sign_my_getnbr_base(str);
  nb = nb * pos;
  return (nb);
}
