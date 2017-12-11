##
## Makefile for Makefile in /home/bouhastine/c/jour07/bouhas_m/my_aff_up_params
## 
## Made by BOUHASTINE Mohamed
## Login   <bouhas_m@etna-alternance.net>
## 
## Started on  Mon Oct 23 18:23:47 2017 BOUHASTINE Mohamed
## Last update Mon Oct 23 18:23:53 2017 BOUHASTINE Mohamed
##

CC = 	gcc

NAME =	aff_up

SRC = 	my_putchar.c \
	main.c \
	my_aff_up_params.c

OBJ = 	$(SRC:%.c=%.o)

RM = 	rm f

CFLAGS = -W -Wall -Werror


$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:		$(RM) $(OBJ)

fclean: 		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: 	all clean fclean re
