/*
** calcul.h for calcul in /home/maire-_n/rendu/Piscine_C_evalexpr/include
** 
** Made by Noé Maire-Amiot
** Login   <maire-_n@epitech.net>
** 
** Started on  Tue Oct 20 14:35:57 2015 Noé Maire-Amiot
** Last update Wed Oct 28 14:56:07 2015 Maxime Parriaux
*/

#ifndef CALCUL_H_
# define CALCUL_H_

int     my_char_isnum(char c);
char    *operateur(char ope, char *firstnb, char *secnb);
char    *ordreopepriority(char *str);
char    *resultat(char *str);

#endif /* !CALCUL_H_ */
