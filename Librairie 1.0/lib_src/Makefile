##
## Makefile for Makefile in /home/bouhastine/c/jour07/bouhas_m/my_aff_up_params
## 
## Made by BOUHASTINE Mohamed
## Login   <bouhas_m@etna-alternance.net>
## 
## Started on  Mon Oct 23 18:23:47 2017 BOUHASTINE Mohamed
## Last update Tue Oct 24 05:51:11 2017 BOUHASTINE Mohamed
##

NAME = 	libmy
SRC =	my_getnbr.c \
	my_putchar.c \
	my_putstr.c \
	my_strcmp.c \
	my_strlen.c \
	my_strncmp.c \
	my_strstr.c \
	my_isneg.c \
	my_put_nbr.c \
	my_strcat.c \
	my_strcpy.c \
	my_strncat.c \
	my_strncpy.c \
	my_swap.c
OBJ =	$(SRC:%.c=%.o)
RM = 	rm -f

$(NAME):	$(OBJ)
		ar r $(NAME).a $(OBJ)
		ranlib $(NAME).a

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME).a

re:	fclean all
