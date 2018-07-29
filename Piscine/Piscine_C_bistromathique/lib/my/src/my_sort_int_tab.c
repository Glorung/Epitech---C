/*
** my_sort_int_tab.c for my_sort_int_tab in /home/parria_m/rendu/Piscine_C_J04
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Thu Oct  1 22:16:40 2015 Maxime Parriaux
** Last update Thu Oct  8 01:31:01 2015 Maxime Parriaux
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	tmp;

  i = size - 1;
  j = 0;
  while (i > 0)
    {
      j = 0;
      while (j < i)
	{
	  if (tab[j] > tab[j + 1])
	    {
	      tmp = tab[j];
	      tab[j] = tab[j + 1];
	      tab[j + 1] = tmp;
	    }
	  j = j + 1;
	}
      i = i - 1;
    }
}
