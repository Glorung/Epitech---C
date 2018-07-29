/*
** my_showstr.c for my_showstr in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct  6 01:52:49 2015 Maxime Parriaux
** Last update Tue Oct  6 02:01:28 2015 Maxime Parriaux
*/

int	my_showstr(char *str)
{
  int	i;
  char	c;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= ' ' && str[i] < '~')
	my_putchar(str[i]);
      else
	{
	  my_putchar('\\');
	  if (str[i] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], "0123456789abcdef");
	}
      i = i + 1;
    }
  return (0);
}
