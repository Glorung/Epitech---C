/*
** my_aff_alpha.c for my_aff_alpha in /home/gendro_v/rendu/Piscine_C_J03
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Wed Sep 30 09:14:54 2015 Vincent Gendron
** Last update Thu Oct  1 20:37:27 2015 Vincent Gendron
*/

int		my_aff_chiffre()
{
  char		alpha;

  alpha = '0';
  while (alpha != ('9' + 1))
    {
      my_putchar(alpha);
      alpha = alpha + 1;
    }
  return (0);
}
