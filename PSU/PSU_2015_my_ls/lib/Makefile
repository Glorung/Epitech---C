##
## Makefile for lib in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls/lib
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Sat Nov 21 12:16:50 2015 Vincent Gendron
## Last update Sun Nov 22 23:17:14 2015 Vincent Gendron
##

NAME		=	libmy.a

SRC_DIR		=	./src/

SRC_FILES	=	my_putchar.c		\
			my_putstr.c		\
			my_putnbr.c		\
			my_put.c		\
			my_strdup.c		\
			free_list.c		\
			my_strlen.c		\
			str_to_wordtab.c	\
			str_copy.c		\
			reader.c		\
			free_tab.c		\
			my_put_in_list.c	\
			tri_list.c		\
			my_strcmp.c		\
			my_issame.c

SRC		=	$(foreach file, $(SRC_FILES), $(SRC_DIR)$(file))

CFLAGS		+=	-I.

OBJ		=	$(SRC:.c=.o)

$(NAME)		:	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME)

re		:	fclean $(NAME)
