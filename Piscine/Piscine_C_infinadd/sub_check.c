/*
** sub_check.c for check_sub\ in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Oct 19 16:06:59 2015 Vincent Gendron
** Last update Tue Oct 20 18:21:12 2015 Vincent Gendron
*/

#include	<string.h>
#include	<stdio.h>
#include	"infinadd.h"

char		*sub_check(char *nb1, char *nb2)
{
  char		*return_v;

  return_v = NULL;
  if (my_strlen(nb1) < my_strlen(nb2))
    {
      return_v = sub_inf(nb2, nb1);
      return_v = str_putcharinfront(return_v, '-');
    }
  else if (my_strlen(nb1) > my_strlen(nb2))
    return_v = sub_inf(nb1, nb2);
  else
    {
      if (my_strcmp(nb1, nb2) > 0)
	return_v = sub_inf(nb1, nb2);
      else if (my_strcmp(nb1, nb2) < 0)
	{
	  return_v = sub_inf(nb2, nb1);
	  return_v = str_putcharinfront(clean_nbrinstr(sub_inf(nb2, nb1)), '-');
	}
      else
	return (NULL);
    }
  return_v = clean_nbrinstr(return_v);
  return (return_v);
}
