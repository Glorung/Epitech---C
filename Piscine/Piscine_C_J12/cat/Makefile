##
## Makefile for makefile in /home/gendro_v/rendu/piscine/Piscine_C_J10/do-op
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Mon Oct 12 17:20:00 2015 Vincent Gendron
## Last update Wed Oct 14 19:22:14 2015 Vincent Gendron
##

NAME 	=	cat

SRC	=	cat.c

OBJ	=	$(SRC:.c=.o)

IFLAGS 	=

CFLAGS +=	$(IFLAGS)

all 	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean 	:
	rm -f $(OBJ)

fclean :	clean
	rm -f $(NAME)

re	:	fclean all
