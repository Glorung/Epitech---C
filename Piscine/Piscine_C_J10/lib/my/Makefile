##
## Makefile for J10 in /home/gendro_v/rendu/piscine/Piscine_C_J10/lib/my
## 
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
## 
## Started on  Mon Oct 12 09:37:55 2015 Vincent Gendron
## Last update Mon Oct 12 15:01:36 2015 Vincent Gendron
##

################################################################################
##				Epitech's Library			      ##
################################################################################

NAME 	=		../libmy.a

SRC 	=		./src/my_factorielle.c		\
			./src/my_getnbr_base.c		\
			./src/my_getnbr.c		\
			./src/my_isneg.c		\
			./src/my_power.c		\
			./src/my_putchar.c		\
			./src/my_putnbr_base.c		\
			./src/my_put_nbr.c		\
			./src/my_putstr.c		\
			./src/my_revstr.c		\
			./src/my_square_root.c		\
			./src/my_strcapitalize.c	\
			./src/my_strcat.c		\
			./src/my_strcmp.c		\
			./src/my_strcpy.c		\
			./src/my_strdup.c		\
			./src/my_str_isalpha.c		\
			./src/my_str_isnum.c		\
			./src/my_str_isprintable.c	\
			./src/my_strlen.c		\
			./src/my_strlowercase.c		\
			./src/my_strncat.c		\
			./src/my_strncmp.c		\
			./src/my_strncpy.c		\
			./src/my_strstr.c		\
			./src/my_strupcase.c		\
			./src/my_swap.c

OBJ 	=		$(SRC:.c=.o)

IFLAGS	+=		-I../../include/

CFLAGS	+=		-W
CFLAGS	+=		-Wall
CFLAGS	+=		-Wextra
CFLAGS	+=		$(IFLAGS)

################################################################################

.SILENT :

all	:		$(NAME)

$(NAME)	:		$(OBJ)
			@cp ./my.h ../../include/
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:		clean
			rm -f $(NAME)

re	:		fclean all

################################################################################
