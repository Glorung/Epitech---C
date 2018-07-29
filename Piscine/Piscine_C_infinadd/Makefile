##
## Makefile for makefile in /home/gendro_v/Epitech/rendu/bistromatique/Piscine_C_infinadd
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Tue Oct 20 17:58:21 2015 Vincent Gendron
## Last update Tue Oct 20 18:12:14 2015 Vincent Gendron
##

NAME	=	infin_add

SRC	=	main.c			\
		my_putchar.c		\
		my_putstr.c		\
		add_inf.c		\
		clean_nbrinstr.c	\
		my_isnbr.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_strlen.c		\
		str_putcharinfront.c	\
		sub_check.c		\
		sub_inf.c

OBJ	=	$(SRC:.c=.o)

IFLAGS	+=	-I./include/

CFLAGS 	+=	-Wall
CFLAGS 	+=	-Wextra
CFLAGS 	+=	-pedantic
CFLAGS 	+=	-ansi
CFLAGS	+=	$(IFLAGS)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean	all
