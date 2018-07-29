/*
** tests-my_factorielle_it.c for test in /home/gendro_v/rendu/Piscine_C_J05/tests
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 09:32:18 2015 Vincent Gendron
** Last update Fri Oct  2 09:51:27 2015 Vincent Gendron
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_put_nbr_check(int *nb)
{
  if (*nb == -2147483648)
    {
      my_putchar('-');
      my_putchar('2');
      my_putchar('1');
      my_putchar('4');
      my_putchar('7');
      my_putchar('4');
      my_putchar('8');
      my_putchar('3');
      my_putchar('6');
      my_putchar('4');
      my_putchar('8');
      return (0);
    }
  else if (*nb < 0)
    {
      my_putchar('-');
      *nb = *nb * -1;
    }
  return (1);
}

int		my_put_nbr(int nb)
{
  if (my_put_nbr_check(&nb))
    {
      if (nb / 10 != 0)
	my_put_nbr(nb / 10);
      my_putchar((nb % 10) + '0');
    }
}

int		main()
{
  int		i;

  i = -1;
  while (i != 15)
    {
      my_put_nbr(my_factorielle_it(i));
      write(1, "\n", 1);
      i = i + 1;
    }
}
