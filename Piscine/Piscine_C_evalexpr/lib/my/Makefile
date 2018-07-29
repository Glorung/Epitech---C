##
## Makefile for MAKEFILE J10 in /home/denizo_r/rendu/Piscine_C_J10
## 
## Made by romain denizot
## Login   <denizo_r@epitech.net>
## 
## Started on  Fri Oct  9 09:45:18 2015 romain denizot
## Last update Wed Oct 21 15:54:53 2015 romain denizot
##

HEAD=	my.h

LIB=	libmy

SRC=	my_extractstr.c \
	my_find_prime_sup.c \
	my_getnbr.c \
	my_intlen.c \
	my_isneg.c \
	my_is_pos.c \
	my_is_prime.c \
	my_nsqrt.c \
	my_power_rec.c \
	my_putchar.c \
	my_putnbr_base.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_showmem.c \
	my_showstr.c \
	my_sort_int_tab.c \
	my_square_root.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_strdup.c \
	my_str_isalpha.c \
	my_str_islower.c \
	my_str_isnum.c \
	my_str_isprintable.c \
	my_str_isupper.c \
	my_strlcat.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncat.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strstr.c \
	my_str_to_wordtab.c \
	my_strupcase.c \
	my_swap.c \
	my_swapstr.c \
	my_show_wordtab.c \

OBJ=	$(SRC:.c=.o)

CFLAGS += -g

all: copy $(NAME) makelib clean

copy:	$(OBJ)
	cp $(LIB).a ../$(LIB).a

$(NAME):	$(OBJ)

makelib:	
	@ar rc ../$(LIB).a $(OBJ)
	@ranlib ../$(LIB).a
	@ar rc $(LIB).a $(OBJ)
	@ranlib ../$(LIB).a

clean: 
	@rm  $(OBJ)
