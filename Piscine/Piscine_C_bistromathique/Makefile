##
## Makefile for Makefile in /home/parria_m/rendu/Piscine_C_infinadd
##
## Made by Maxime Parriaux
## Login   <parria_m@epitech.net>
##
## Started on  Mon Oct 19 09:07:23 2015 Maxime Parriaux
## Last update Sun Nov  1 23:40:04 2015 Maxime Parriaux
##

################################################################################
################################################################################
##    ____  _     _             _    ##					      ##
##   |  _ \(_)   | |           ( )   ## by :				      ##
##   | |_) |_ ___| |_ _ __ ___ |/    ##					      ##
##   |  _ <| / __| __| '__/ _ \      ##		- parria_m		      ##
##   | |_) | \__ \ |_| | | (_) |     ##		- brende_j		      ##
##   |____/|_|___/\__|_|  \___/      ##		- gendro_v		      ##
##                                   ##					      ##
################################################################################
################################################################################



################################################################################
##				    Var					      ##
################################################################################

NAME	= 	calc

SRC	= 	./src/main.c						\
		./src/bistromathique.c					\
		./src/calcul.c						\
		./src/calculfunctions.c					\
		./src/cleaner.c						\
		./src/convert_base.c					\
		./src/entryconvert.c					\
		./src/entrycheck.c					\
		./src/error.c						\
		./src/evalexpr.c					\
		./src/findparenthesis.c					\
		./src/infinadd.c					\
		./src/infindiv.c					\
		./src/infinmodulo.c					\
		./src/infinmult.c					\
		./src/infinsub.c					\
		./src/intoparenthesis.c 				\
		./src/nbr_to_str.c					\
		./src/operation.c					\
		./src/parsingparenthesis.c 				\
		./src/putinstring.c					\
		./src/replaceminus.c					\
		./src/replaceminus2.c					\
		./src/sizebtparenthesis.c 				\
		./src/verif.c						\
		./src/verif2.c						\

CC	= 	gcc

RM	=	rm -f

OBJ	= 	$(SRC:.c=.o)

## Libmy ##

LIB	+= 	-lmy
LIB	+=	-Llib

IFLAGS 	+=	-I./include/

CFLAGS	+= 	$(IFLAGS)

################################################################################
##				    Rules				      ##
################################################################################

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		make -C ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(LIB) $(LDFLAGS)
		echo -e 'Makefile - Compilation:  [\e[1;32mdone\e[0;m]'

clean	:
		make -C ./lib/my/ clean
		$(RM) $(OBJ)
		echo -e 'Makefile - clean:        [\e[1;32mdone\e[0;m]'

fclean	:
		make -C ./lib/my/ fclean
		$(RM) $(OBJ)
		$(RM) $(NAME)
		echo -e 'Makefile - fclean:   	 [\e[1;32mdone\e[0;m]'

lib	:
		make -C ./lib/my/ re

re	:	fclean	all

.PHONY	:	all	re	clean	fclean	lib

.SILENT :

################################################################################
## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ##
################################################################################
