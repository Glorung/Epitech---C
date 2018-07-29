/*
** tests-my_isneg.c for test in /home/gendro_v/rendu/Piscine_C_J03/tests
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 10:39:21 2015 Vincent Gendron
** Last update Thu Oct  1 10:46:35 2015 Vincent Gendron
*/

int		main()
{
  my_isneg(-2147483648);
  my_isneg(-1);
  my_isneg(0);
  my_isneg(1);
  my_isneg(2147483647);
}
