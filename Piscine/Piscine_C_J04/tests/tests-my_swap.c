/*
** tests-my_swap.c for test in /home/gendro_v/rendu/Piscine_C_J04/tests
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 15:55:11 2015 Vincent Gendron
** Last update Fri Oct  2 16:01:22 2015 Vincent Gendron
*/

int		main()
{
  int		nb1;
  int		nb2;
  int		*ptr1;
  int		*ptr2;

  nb1 = -100000;
  nb2 = -12345678;
  ptr1 = &nb1;
  ptr2 = &nb2;
  my_swap(ptr1, ptr2);
  nb1 = 12;
  nb2 = -18;
  my_swap(ptr1, ptr2);
  nb1 = 1000;
  nb2 = 2048;
  my_swap(ptr1, ptr2);
  nb1 = -100000;
  nb2 = -12345678;
  my_swap(ptr1, ptr2);
  my_swap(ptr1, ptr2);
  my_swap(ptr1, ptr2);
}
