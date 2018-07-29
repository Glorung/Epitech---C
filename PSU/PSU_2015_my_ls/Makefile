##
## Makefile for ls in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_my_ls
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Sat Nov 21 12:33:29 2015 Vincent Gendron
## Last update Sun Nov 22 23:23:08 2015 Vincent Gendron
##

NAME =		my_ls

SRC =		./fcts/main.c		\
		./fcts/ls.c		\
		./fcts/get_arg.c	\
		./fcts/error.c		\
		./fcts/get_name.c	\
		./fcts/get_group.c	\
		./fcts/get_right.c	\
		./fcts/get_date.c	\
		./fcts/get_link.c	\
		./fcts/get_size.c	\
		./fcts/get_type.c	\
		./fcts/get_param.c	\
		./fcts/init.c		\
		./fcts/check_type.c

CC =		gcc -o

RM =		rm -f

LIB =		./lib/

OBJ =		$(SRC:.c=.o)

IFLAGS +=	-I./include/
IFLAGS +=	-I$(LIB)

CFLAGS +=	-W
CFLAGS +=	-Wall
CFLAGS +=	-Wextra
CFLAGS +=	-pedantic
CFLAGS +=	-ansi
CFLAGS +=	$(IFLAGS)

LDFLAGS =	-lmy -L$(LIB)

$(NAME) :	$(OBJ)
		make -C $(LIB)
		$(CC) $(NAME) $(OBJ) $(LDFLAGS)

all :		$(NAME)

clean :
		make clean -C $(LIB)
		$(RM) $(OBJ)

fclean :	clean
		make fclean -C $(LIB)
		$(RM) $(NAME)

re :		fclean all
