##
## Makefile for my_select in /home/gendro_v/PSU_2015_my_select/L_Linked_List
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Thu Nov 26 15:51:27 2015 Vincent Gendron
## Last update Thu Nov 26 15:51:27 2015 Vincent Gendron
##

NAME	= libLinked_List.a

SRC	= my_put_in_list.c	\
	  my_put.c

OBJ	= $(SRC:.c=.o)

$(NAME)	: $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean	:
	rm -f $(OBJ)

fclean	:
	rm -f $(NAME)

re	: fclean $(NAME)
