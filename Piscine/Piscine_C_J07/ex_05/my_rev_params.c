/*
** my_aff_params.c for my aff params in /home/gendro_v/rendu/piscine/Piscine_C_J07/ex_02
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Tue Oct  6 10:59:42 2015 Vincent Gendron
** Last update Tue Oct  6 11:02:53 2015 Vincent Gendron
*/

int		main(int ac, char **av)
{
  int		i;
  int		len;

  i = ac - 1;
  while (i != -1)
    {
      len = 0;
      while (av[i][len])
	len = len + 1;
      write(1, av[i], len);
      write(1, "\n", 1);
      i = i - 1;
    }
}
