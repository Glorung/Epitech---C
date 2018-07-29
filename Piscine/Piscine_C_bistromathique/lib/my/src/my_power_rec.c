/*
** my_power_rec.c for my_power_rec in /home/parria_m/rendu/Piscine_C_J05
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Fri Oct  2 11:30:46 2015 Maxime Parriaux
** Last update Wed Oct 21 00:15:51 2015 Maxime Parriaux
*/

int	my_power_rec(int nb, int power)
{
  int	tmp;

  tmp = nb;
  if (power < 0 || (nb == 0 && power != 0))
    return (0);
  if (power == 0)
    return (1);
  tmp = tmp * my_power_rec(nb, power - 1);
  return (tmp);
}
