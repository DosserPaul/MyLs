##
## EPITECH PROJECT, 2020
## jso
## File description:
## Makefile
##

NAME = libls.a

SRC =	flags/no_flag.c	\
		flags/flags.c	\
		flags/flag_l.c	\
		mode.c			\
		uid_gid.c		\
		total.c

OBJ = $(SRC:.c=.o)

HEADER = ls.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(HEADER) ../../includes/
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm ../../includes/$(HEADER)

clean:
	rm -f $(OBJ)

re:	fclean all