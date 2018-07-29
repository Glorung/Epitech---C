/*
** my_strlen.c for my_strlen in /home/denizo_r/rendu/Piscine_C_J04
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Thu Oct  1 11:17:50 2015 romain denizot
** Last update Tue Oct 13 20:00:21 2015 romain denizot
*/

int	my_strlen(char* str)
{
  int   i;

  i = 0;
  while (*(str + i) != 0)
    {
      i = i + 1;
    }
  return (i);
}
