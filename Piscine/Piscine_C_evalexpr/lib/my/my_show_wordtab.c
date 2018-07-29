/*
** my_show_wordtab.c for my_show_wordtab in /home/denizo_r/rendu/Piscine_C_J08
** 
** Made by romain denizot
** Login   <denizo_r@epitech.net>
** 
** Started on  Wed Oct  7 11:27:50 2015 romain denizot
** Last update Thu Oct 22 14:49:57 2015 romain denizot
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
