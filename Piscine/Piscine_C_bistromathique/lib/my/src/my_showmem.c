/*
** my_showmem.c for my_showmem in /home/parria_m/rendu/Piscine_C_J06
** 
** Made by Maxime Parriaux
** Login   <parria_m@epitech.net>
** 
** Started on  Tue Oct  6 15:10:29 2015 Maxime Parriaux
** Last update Tue Oct  6 19:00:43 2015 Maxime Parriaux
*/

void		adress(char *str)
{
  long int	max;

  max = 0x10000000;
  while ((int *)str < (int *)max)
    {
      write(1, "0", 1);
      max = max / 16;
    }
  my_putnbr_base(str, "0123456789abcdef");
  write(1, ":", 1);
  write(1, " ", 1);
}

void	hexvalue(char *str, int size)
{
  int	i;

  i = 0;
  while (i != 16 && i != size)
    {
      if (str[i] < ' ' || str[i] > '~')
	write(1, "0", 1);
      my_putnbr_base(str[i], "0123456789abcdef");
      if (i % 2 == 1)
	write(1, " ", 1);
      i = i + 1;
    }
  while (size < 16)
    {
      write(1, " ", 1);
      write(1, " ", 1);
      if (size % 2 == 0)
	write(1, " ", 1);
      size = size + 1;
    }
}

void	show_char(char *str, int size)
{
  int	i;

  i = 0;
  write(1, " ", 1);
  while (i != 16 && i != size)
    {
      if (str[i] >= ' ' && str[i] <= '~')
	write(1, &str[i], 1);
      else
	write(1, ".", 1);
      i = i + 1;
    }
}

int	my_showmem(char *str, int size)
{
  int	i;
  int	nstr;

  i = 0;
  nstr = 0;
  size = size + 1;
  while (i < size / 16)
    {
      adress(str + i * 16);
      hexvalue(str + i * 16, size - i * 16);
      show_char(str + i * 16, size - i * 16);
      i = i + 1;
      write(1, "\n", 1);
    }
  if (i * 16 < size)
    {
      adress(str + i * 16);
      hexvalue(str + i *16, size - i * 16);
      show_char(str + i * 16, size - i * 16);
      write(1, "\n", 1);
    }
  return (0);
}
