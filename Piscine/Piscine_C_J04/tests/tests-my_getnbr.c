/*
** tests-my_getnbr.c for test in /home/gendro_v/rendu/Piscine_C_J04/tests
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 16:44:52 2015 Vincent Gendron
** Last update Fri Oct  2 16:59:14 2015 Vincent Gendron
*/

#include	<string.h>

int		main()
{
  char		*str;

  str = strdup("");
  my_getnbr(str);
  str = strdup("\n");
  my_getnbr(str);
  str = strdup("a42a");
  my_getnbr(str);
  str = strdup("--+-+-+12323456");
  my_getnbr(str);
  str = strdup("42a12 12");
  my_getnbr(str);
  str = strdup("-2419382");
  my_getnbr(str);
}
