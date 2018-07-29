/*
** my_power_rec.c for my_power_rec in /home/denizo_r/rendu/Piscine_C_J05/Piscine_C_J05
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Sat Oct  3 13:56:15 2015 romain denizot
** Last update Mon Oct  5 21:47:47 2015 romain denizot
*/

int	my_power_rec(int nb, int power)
{
  int	myPow;

  if (power < 0 || nb == 0)
    return (0);
  if (power == 0)
    return (1);
  if (power == 1)
    return (nb);
  if (power > 1)
    myPow = nb * my_power_rec(nb, power - 1);
  return ((myPow * nb / nb == myPow) ? myPow : 0);
}
