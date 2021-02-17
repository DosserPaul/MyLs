##
## EPITECH PROJECT, 2020
## jso
## File description:
## Makefile
##

NAME = my_ls

SRC =	ls_main.c

FLA	=	sources/ls/flags/no_flag.c -L sources/my_printf/ -lprintf -L sources/ls/ -lls -I includes/

all:	strat

strat:
	$(MAKE) -C sources/ls
	$(MAKE) -C sources/my_printf
	gcc -o $(NAME) $(SRC) $(FLA)

fclean:
	$(MAKE) fclean -C sources/ls
	$(MAKE) fclean -C sources/my_printf

clean:
	$(MAKE) clean -C sources/ls
	$(MAKE) clean -C sources/my_printf

re:	fclean all