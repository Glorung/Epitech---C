/*
** sapin.c for sapin in /home/gendro_v/Piscine_C_Sapin
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Thu Oct  1 23:08:38 2015 Vincent Gendron
** Last update Sun Oct  4 23:06:00 2015 Vincent Gendron
*/

int		put_char_len(char c, int len)
{
  int		i;

  i = 0;
  if (i >= 0)
    {
      while (i != len)
	{
	  write(1, &c, 1);
	  i = i + 1;
	}
    }
}

int		sapin_space_begin(int size)
{
  int		base;
  int		add;
  int		i;

  base = 7;
  if (size != 1)
    {
      add = 6;
      i = 1;
      while (i != size)
	{
	  i = i + 1;
	  base = base + add;
	  if (i % 2 == 0)
	    add = add + 2;
	}
    }
  base = base / 2;
  return (base);
}

int		sapin_len_space(int step, int len_space)
{
  static int	add_space = 1;

  if (step % 2 != 0)
    add_space = add_space + 1;
  return (len_space + add_space);
}

int		sapin_len_sapin(int step, int len_sapin)
{
  static int	remove_star = 2;

  if (step % 2 != 0)
    remove_star = remove_star + 2;
  return (len_sapin - remove_star);
}

void		sapin_put_trunk(int size)
{
  int		trunk_width;
  int		space_width;
  int		height;
  int		len;

  if (size > 0)
    {
      len = sapin_space_begin(size);
      if (size % 2 == 0)
	trunk_width = size + 1;
      else
	trunk_width = size;
      height = 0;
      space_width = len - (trunk_width / 2);
      while (height < size)
	{
	  put_char_len(' ', space_width);
	  put_char_len('|', trunk_width);
	  write(1, "\n", 1);
	  height = height + 1;
	}

    }
}

int		sapin(int taille)
{
  int		len[2];
  int		step;
  int		end_step;
  int		mid_step;

  end_step = 4;
  len[0] = sapin_space_begin(taille);
  len[1] = 1;
  step = 0;
  while ((step = step + 1) == step && step <= taille && taille > 0)
    {
      mid_step = 1;
      while (mid_step <= end_step && (mid_step = mid_step + 1) == mid_step)
	{
	  put_char_len(' ', len[0]);
	  put_char_len('*', len[1]);
	  len[0] = len[0] - 1;
	  len[1] = len[1] + 2;
	  write(1, "\n", 1);
	}
      len[0] = sapin_len_space(step, len[0]);
      len[1] = sapin_len_sapin(step, len[1]);
      end_step = end_step + 1;
    }
  sapin_put_trunk(taille);
}
