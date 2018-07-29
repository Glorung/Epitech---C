##
## Makefile for MAKEFILE J10 in /home/denizo_r/rendu/Piscine_C_J10
## 
## Made by romain denizot
## Login   <denizo_r@epitech.net>
## 
## Started on  Fri Oct  9 09:45:18 2015 romain denizot
## Last update Thu Oct 22 14:43:15 2015 romain denizot
##

NAME=	eval_expr

LIB=	lib/

INCLUDE =	./include/

LIBN=	my

SRC=	main.c 			\
	eval_expr.c 		\
	is_nbr.c 		\
	part_calc.c 		\
	is_operand.c 		\
	inttostring.c 		\
	tab/addintab.c 		\
	tab/freetab.c 		\
	tab/removeintab.c 	\
	tab/tablen.c 		\
	next_operand.c 		\
	remove_bracket.c	\
	remove_spaces.c

IFLAGS 	+=	-I$(INCLUDE) -I.

CFLAGS	+=	-W
CFLAGS	+=	-Wall
CFLAGS	+=	-Wextra
CFLAGS	+=	-pedantic
CFLAGS	+=	-ansi
CFLAGS	+=	$(IFLAGS)

OBJ=	$(SRC:.c=.o)

all:	 $(NAME)

$(NAME):	$(OBJ)
	@make -C ./lib/my/
	cc $(OBJ) -g3 -l$(LIBN) -L $(LIB) -o $(NAME)

clean: 
	@rm -f $(OBJ)

fclean:		clean	
	@rm -f $(NAME)

re:	fclean all
