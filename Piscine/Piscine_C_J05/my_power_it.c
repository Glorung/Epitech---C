/*
** my_power_it.c for my_power in /home/gendro_v/rendu/Piscine_C_J05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 10:07:37 2015 Vincent Gendron
** Last update Tue Oct  6 14:36:41 2015 Vincent Gendron
*/

int		my_power_it(int nb, int power)
{
  int		i;
  int		nb_save;
  int		anti_memory;

  if (nb == 0 && power == 0)
    return (1)
  if (nb == 0)
    return (0);
  if (power == 1)
    return (nb);
  if (power == 0)
    return (1);
  if (power < 0)
    return (0);
  i = 1;
  nb_save = nb;
  while (i != power)
    {
      anti_memory = nb;
      nb = nb * nb_save;
      if (anti_memory != nb / nb_save)
	return (0);
      i = i + 1;
    }
  return (nb);
}
