/*
** my_factorielle_rec.c for my_factorielle in /home/gendro_v/rendu/Piscine_C_J05
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 09:52:35 2015 Vincent Gendron
** Last update Mon Oct 12 11:15:16 2015 Vincent Gendron
*/

int		my_factorielle(int nb)
{
  if (nb < 0 || nb > 12)
    return (0);
  if (nb != 0)
    {
      nb = nb * my_factorielle(nb - 1);
      return (nb);
    }
  else
    return (1);
}
