##
## Makefile for makefileJ10 in /home/parria_m/rendu/Piscine_C_J10/lib/my
##
## Made by Maxime Parriaux
## Login   <parria_m@epitech.net>
##
## Started on  Fri Oct  9 09:40:05 2015 Maxime Parriaux
## Last update Sun Nov  1 16:48:56 2015 Vincent Gendron
##

NAME	= 	../libmy.a

SRC	= 	./src/my_getnbr_base.c 		\
	  	./src/my_getnbr.c 		\
	  	./src/my_isneg.c 		\
	  	./src/my_is_prime.c 		\
	  	./src/my_power_rec.c 		\
	  	./src/my_putchar.c 		\
	  	./src/my_putnbr_base.c 		\
	  	./src/my_put_nbr.c 		\
	  	./src/my_putstr.c 		\
	  	./src/my_revstr.c 		\
	  	./src/my_showmem.c 		\
	  	./src/my_showstr.c 		\
	  	./src/my_show_wordtab.c 	\
	  	./src/my_sort_int_tab.c 	\
	  	./src/my_square_root.c 		\
	  	./src/my_strcapitalize.c 	\
	  	./src/my_strcat.c 		\
	  	./src/my_strcmp.c 		\
	  	./src/my_strcpy.c 		\
	  	./src/my_strdup.c 		\
	  	./src/my_str_isalpha.c 		\
	  	./src/my_str_islower.c 		\
	  	./src/my_str_isnum.c 		\
	  	./src/my_str_isprintable.c 	\
	  	./src/my_str_isupper.c 		\
	  	./src/my_strlcat.c 		\
	  	./src/my_strlen.c 		\
	  	./src/my_strlowcase.c	 	\
	  	./src/my_strncat.c 		\
	  	./src/my_strncmp.c 		\
	  	./src/my_strncpy.c 		\
	  	./src/my_strstr.c 		\
	  	./src/my_str_to_wordtab.c 	\
	  	./src/my_strupcase.c 		\
	  	./src/my_swap.c

CC	= 	cc

RM	=	rm -f

OBJ	= 	$(SRC:.c=.o)

IFLAFS	+=	-I../../include/

CFLAFS	+=	-W
CFLAFS	+=	-Wall
CFLAFS	+=	-Wextra
CFLAGS 	+=	$(IFLAGS)

all	:		$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		echo -e 'Library - Compilation:   [\e[1;32mdone\e[0;m]'

clean	:
		$(RM) $(OBJ)
		echo -e 'Library - clean:         [\e[1;32mdone\e[0;m]'

fclean	:
		$(RM) $(OBJ)
		$(RM) $(NAME)
		echo -e 'Library - fclean:        [\e[1;32mdone\e[0;m]'

re 	:	fclean all

.SILENT	:

.PHONY	:	all clean fclean re
