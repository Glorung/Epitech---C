/*
** tests-my_evil_str.c for test in /home/gendro_v/rendu/Piscine_C_J04/tests
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Fri Oct  2 16:19:39 2015 Vincent Gendron
** Last update Fri Oct  2 16:28:04 2015 Vincent Gendron
*/

int		main()
{
  char		str[20];

  str[0] = '\0';
  my_evil_str(str);
  my_putstr(str);
  str[0] = 's';
  str[1] = 'a';
  str[2] = 'l';
  str[3] = 'u';
  str[4] = 't';
  str[5] = '\0';
  my_evil_str(str);
  my_putstr(str);
}
