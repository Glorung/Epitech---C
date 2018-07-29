/*
** tests-my_put_nbr.c for test in /home/gendro_v/rendu/Piscine_C_J03/tests
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 09:59:41 2015 Vincent Gendron
** Last update Thu Oct  1 10:09:27 2015 Vincent Gendron
*/

int		main()
{
  my_put_nbr(-2147483648);
  my_putchar(' ');
  my_put_nbr(-10001);
  my_putchar(' ');
  my_put_nbr(-42);
  my_putchar(' ');
  my_put_nbr(-1);
  my_putchar(' ');
  my_put_nbr(0);
  my_putchar(' ');
  my_put_nbr(1);
  my_putchar(' ');
  my_put_nbr(42);
  my_putchar(' ');
  my_put_nbr(10001);
  my_putchar(' ');
  my_put_nbr(2147483647);
}
