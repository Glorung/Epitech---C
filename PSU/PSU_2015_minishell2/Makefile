##
## Makefile for minishell1 in /home/gendro_v/Dropbox/Epitech/Tek2d/PSU/PSU_2015_minishell1
##
## Made by Vincent Gendron
## Login   <gendro_v@epitech.net>
##
## Started on  Mon Nov 23 22:46:40 2015 Vincent Gendron
## Last update Mon Dec 21 17:39:14 2015 Vincent Gendron
##

################################################################################
##  ___  ____       _     _          _ _  __    ##                            ##
##  |  \/  (_)     (_)   | |        | | |/  |   ##                            ##
##  | .  . |_ _ __  _ ___| |__   ___| | |`| |   ## Made by :                  ##
##  | |\/| | | '_ \| / __| '_ \ / _ \ | | | |   ##                            ##
##  | |  | | | | | | \__ \ | | |  __/ | |_| |_  ##		gendro_v      ##
##  \_|  |_/_|_| |_|_|___/_| |_|\___|_|_|\___/  ##                            ##
##                                              ##                            ##
################################################################################

############
# Settings #
############

NAME	=	mysh

DEBUG	=	yes

############

LIB_DIR	=	./lib/

SRC_DIR	=	./src/

IFLAGS +=	-I./include/

CFLAGS	+=	$(IFLAGS)

ifeq ($(DEBUG), yes)
	CFLAGS += -g
endif

##############
## Base src ##
##############

BASE_DIR	=	base/

BASE_SRC	=	main.c

BASE = $(foreach file, $(BASE_SRC), $(SRC_DIR)$(BASE_DIR)$(file))

###############
## build src ##
###############

BUILD_DIR	=	build/

BUILD_SRC	=	build.c		\
			cd.c		\
			env.c		\
			exit.c		\
			setenv.c	\
			unsetenv.c

BUILD = $(foreach file, $(BUILD_SRC), $(SRC_DIR)$(BUILD_DIR)$(file))

###################
## Execution src ##
###################

EXEC_DIR	=	execution/

EXEC_SRC	=	execute_cmd.c	\
			generate_env.c	\
			pipe.c

EXEC = $(foreach file, $(EXEC_SRC), $(SRC_DIR)$(EXEC_DIR)$(file))

#################
## Parsing src ##
#################

PARSING_DIR	=	parsing/

PARSING_SRC	=	fill_env.c	\
			get_cmd.c	\
			get_env_name.c	\
			get_env_value.c	\
			get_path.c	\
			my_getenv.c	\
			my_put_in_env.c

PARSING	= $(foreach file, $(PARSING_SRC), $(SRC_DIR)$(PARSING_DIR)$(file))

#############
## Lib src ##
#############

LIB_SRC =	epur_str.c	\
		get_next_line.c	\
		my_free_tab.c	\
		my_malloc_tab.c	\
		my_strcmp.c	\
		my_strrealloc.c	\
		my_strtotab.c	\
		my_strdup.c	\
		my_strlen.c	\
		put_in_tab.c	\
		my_putstr.c

LIB = $(foreach file, $(LIB_SRC), $(LIB_DIR)$(file))

#########
## Src ##
#########

SRC	=	$(BASE)		\
		$(BUILD)	\
		$(EXEC)		\
		$(PARSING)	\
		$(LIB)

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:
		rm -f $(OBJ)
		rm -f $(NAME)

re	:	fclean $(NAME)
