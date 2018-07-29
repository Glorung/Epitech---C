/*
** define.c for my_printf in /home/gendro_v/PSU_2015_my_printf
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:27:09 2015 Vincent Gendron
** Last update Mon Nov 16 21:27:11 2015 Vincent Gendron
*/

#include	<stdlib.h>
#include	<stdarg.h>

#include	<stdio.h>
#include	"flags.h"
#include	"my.h"

void		define_fct(char *(*fct[16])(va_list args))
{
  fct[0] = &flag_z;
  fct[1] = &flag_q;
  fct[2] = &flag_ll;
  fct[3] = &flag_l;
  fct[4] = &flag_d;
  fct[5] = &flag_i;
  fct[6] = &flag_o;
  fct[7] = &flag_u;
  fct[8] = &flag_x;
  fct[9] = &flag_xmaj;
  fct[10] = &flag_c;
  fct[11] = &flag_s;
  fct[12] = &flag_p;
  fct[13] = &flag_percent;
  fct[14] = &flag_b;
  fct[15] = NULL;
}

char		**define_flag(char **tab)
{
  tab = NULL;
  tab = put_in_tab(tab, my_strdup("%z"));
  tab = put_in_tab(tab, my_strdup("%q"));
  tab = put_in_tab(tab, my_strdup("%lld"));
  tab = put_in_tab(tab, my_strdup("%ld"));
  tab = put_in_tab(tab, my_strdup("%d"));
  tab = put_in_tab(tab, my_strdup("%i"));
  tab = put_in_tab(tab, my_strdup("%o"));
  tab = put_in_tab(tab, my_strdup("%u"));
  tab = put_in_tab(tab, my_strdup("%x"));
  tab = put_in_tab(tab, my_strdup("%X"));
  tab = put_in_tab(tab, my_strdup("%c"));
  tab = put_in_tab(tab, my_strdup("%s"));
  tab = put_in_tab(tab, my_strdup("%p"));
  tab = put_in_tab(tab, my_strdup("%%"));
  tab = put_in_tab(tab, my_strdup("%b"));
  return (tab);
}
