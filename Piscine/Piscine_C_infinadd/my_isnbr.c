/*
** my_isnbr.c for isnbr in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 11:41:19 2015 Vincent Gendron
** Last update Mon Oct 19 11:48:46 2015 Vincent Gendron
*/

int		my_isnbr(char *str)
{
  int		i;

  i = 0;
  if (!str || str[0] == '\0')
    return (0);
  while (str[i] == '-' || str[i] == '+')
    i = i + 1;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (0);
      i = i + 1;
    }
  return (1);
}
