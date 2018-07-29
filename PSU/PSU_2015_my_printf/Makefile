##
## Makefile for makefile in /home/glorung/Rendu/PSU_2015_my_printf
##
## Made by Glorung
## Login   <glorung@epitech.net>
##
## Started on  Thu Nov  5 00:54:51 2015 Glorung
## Last update Mon Nov 16 17:38:49 2015 
##

NAME	=	libmy.a

LIB	=	./lib_fct/my_puterror.c			\
		./lib_fct/my_putstr.c			\
		./lib_fct/my_strdup.c			\
		./lib_fct/my_strlen.c			\
		./lib_fct/putcharinback.c		\
		./lib_fct/putcharinfront.c		\
		./lib_fct/putstrinback.c		\
		./lib_fct/tab_fct.c			\
		./lib_fct/inttostring.c			\
		./lib_fct/uinttostring.c		\
		./lib_fct/uinttobase.c			\
		./lib_fct/longtobase.c			\
		./lib_fct/longtostring.c		\
		./lib_fct/longlongtostring.c

FLAGS	=	./flags/flag_onetofive.c	\
		./flags/flag_sixtoten.c		\
		./flags/flag_eleventosixteen.c

SRC	=	$(LIB)				\
		$(FLAGS)			\
		define.c			\
		compare_flag.c			\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

IFLAGS +=	-I.
IFLAGS +=	-I./include/

CFLAGS +=	$(IFLAGS)
CFLAGS +=	-Wall
CFLAGS +=	-g
#CFLAGS +=	-Wextra

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:
		rm -f $(OBJ)
		rm -f $(NAME)

re	:	fclean	all
