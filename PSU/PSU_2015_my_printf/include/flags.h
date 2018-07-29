/*
** flags.h for my_printf in /home/gendro_v/PSU_2015_my_printf
** 
** Made by Vincent Gendron
** Login   <gendro_v@epitech.net>
** 
** Started on  Mon Nov 16 21:40:56 2015 Vincent Gendron
** Last update Mon Nov 16 21:40:57 2015 Vincent Gendron
*/

#ifndef FLAGS_H_
# define FLAGS_H_

char		*flag_z(va_list);
char		*flag_q(va_list);
char		*flag_ll(va_list);
char		*flag_l(va_list);
char		*flag_d(va_list);
char		*flag_i(va_list);
char		*flag_o(va_list);
char		*flag_u(va_list);
char		*flag_x(va_list);
char		*flag_xmaj(va_list);
char		*flag_c(va_list);
char		*flag_s(va_list);
char		*flag_p(va_list);
char		*flag_percent(va_list);
char		*flag_b(va_list);

#endif /* !FLAGS_H_ */
