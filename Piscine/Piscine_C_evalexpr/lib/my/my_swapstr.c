/*
** my_swapstr.c for libmy.a in /home/denizo_r/rendu/Piscine_C_infinadd/lib/my
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Mon Oct 19 18:27:29 2015 romain denizot
** Last update Mon Oct 19 18:30:52 2015 romain denizot
*/

void	my_swapstr(char **str1, char **str2)
{
  char *tmp;

  tmp = *str1;
  *str1 = *str2;
  *str2 = tmp;
}
