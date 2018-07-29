##
## Makefile for makefile in /home/gendro_v/rendu/piscine/Piscine_C_J10/do-op
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Mon Oct 12 17:20:00 2015 Vincent Gendron
## Last update Mon Oct 12 17:45:24 2015 Vincent Gendron
##

NAME 	=	do-op

SRC	=	do-op.c

OBJ	=	$(SRC:.c=.o)

IFLAGS +=	-I../include/

CFLAGS +=	$(IFLAGS)

all 	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) do-op.c -L../lib/ -lmy -I../include/

clean 	:
	rm -f $(OBJ)

fclean :	clean
	rm -f $(NAME)

re	:	fclean all
