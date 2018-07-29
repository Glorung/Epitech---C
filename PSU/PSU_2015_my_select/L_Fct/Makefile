##
## Makefile for my_select in /home/gendro_v/PSU_2015_my_select/L_Fct
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Thu Nov 26 15:49:32 2015 Vincent Gendron
## Last update Sun Nov 29 23:00:09 2015 Vincent Gendron
##

NAME	= libmy.a

SRC	= aff.c \
	free_screen.c \
	get_key.c \
	my_getenv.c \
	my_strcmp.c \
	my_strlen.c\
	raw_mode.c \
	my_strrealloc.c\
	my_strcat.c\
	my_strdup.c\
	switch.c	\
	str_length.c

OBJ	= $(SRC:.c=.o)

CFLAGS += -I./.. -I./../L_Linked_List -lncurses

$(NAME)	: $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re	: fclean $(NAME)
