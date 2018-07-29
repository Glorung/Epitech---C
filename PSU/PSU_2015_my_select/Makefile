##
## Makefile for my_select in /home/gendro_v/PSU_2015_my_select
##
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
##
## Started on  Thu Nov 26 15:48:14 2015 Vincent Gendron
## Last update Sun Nov 29 23:00:02 2015 Vincent Gendron
##

NAME	= my_select

SRC	= main.c 	\
	  user.c 	\
	  interface.c 	\
	  tty.c		\
	  setupwin.c	\
	  displaywin.c	\
	  windowconfig.c\
	  input.c

CC	= gcc -o

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Wall -Wextra -pedantic -I./L_Fct -I./L_Linked_List $(LDFLAGS)

LDFLAGS	+= -lncurses -lmy -L./L_Fct -lLinked_List -L./L_Linked_List

RM	= rm -f

$(NAME)	: $(OBJ)
	make -C ./L_Fct/
	make -C ./L_Linked_List/
	$(CC) $(NAME) $(OBJ) $(LDFLAGS)

all: $(NAME)

clean	:
	make clean -C ./L_Fct/
	make clean -C ./L_Linked_List/
	$(RM) $(OBJ)

fclean	: clean
	make fclean -C ./L_Fct/
	make fclean -C ./L_Linked_List/
	$(RM) $(NAME)

re	: fclean all
