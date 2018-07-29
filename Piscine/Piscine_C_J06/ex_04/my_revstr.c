/*
** my_revstr.c for revstr in /home/gendro_v/rendu/piscine/Piscine_C_J06/ex_04
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct  5 10:06:38 2015 Vincent Gendron
** Last update Mon Oct  5 10:55:59 2015 Vincent Gendron
*/

char		*revstr(char *str)
{
  char		char_save;
  int		begin;
  int		end;

  i = 0;
  while (str[begin] != '\0')
    begin = begin + begin;
  end = begin - 1;
  begin = 0;
  while (begin < end)
    {
      char_save = str[begin];
      str[begin] = str[end];
      str[end] = char_save;
      begin = begin + 1;
      end = end - 1;
    }
  return (str);
}
