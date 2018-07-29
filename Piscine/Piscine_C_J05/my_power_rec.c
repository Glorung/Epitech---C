/*
** my_power_rec.c for my_power in /home/gendro_v/rendu/Piscine_C_J05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 10:18:35 2015 Vincent Gendron
** Last update Tue Oct  6 14:37:15 2015 Vincent Gendron
*/

int		my_power_rec(int nb, int power)
{
  if (power == 0 && nb == 0)
    return (1);
  if (power < 0 || nb == 0)
    return (0);
  else if (power == 0)
    return (1);
  else if (power == 1)
    return (nb);
  nb = nb * my_power_rec(nb, power - 1);
  return (nb);
}
