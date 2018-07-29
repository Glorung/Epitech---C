/*
** my_show_wordtab.c for my_show_wordtab.c in /home/parria_m/rendu/Piscine_C_J08
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Wed Oct  7 11:55:33 2015 Maxime Parriaux
** Last update Wed Oct  7 12:02:23 2015 Maxime Parriaux
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
}
