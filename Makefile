##
## EPITECH PROJECT, 2020
## lib
## File description:
## Makefile
##

PRINTF =	printf/hexadecimal.c \
			printf/my_function.c \
			printf/my_printf.c \
			printf/my_prints.c \
			printf/my_prints_v2.c \
			printf/octal.c \
			printf/pointer.c \
			printf/my_strcat.c \
			printf/my_strcmp.c \
			printf/my_strcpy.c \
			printf/my_getnbr.c \
			printf/my_strdup.c \
			printf/my_strncmp.c \
			printf/is_number.c

SRC		=	map/create_map.c \
			map/my_malloc.c \
			map/my_str_to_word_array.c \
			error/error.c \
			my_ia/first_case.c \
			my_ia/second_case.c \
			my_ia/ia.c \
			my_ia/match.c \
			error/second_error.c \
			loopgame/set_game.c \
			test.c \
			loopgame/input.c \
			loopgame/check_game.c

NAME	=		matchstick

LIB		=		libmy.a

all: $(NAME)

$(NAME):
	gcc -c $(PRINTF)
	ar rc $(LIB) *o
	rm *.o
	chmod +x $(LIB)
	gcc -o $(NAME) $(SRC) -lmy -L./ -W -Wall -Werror

clean:
	find . -type f -name "*~" -o -name "#*#" -delete
	rm -f *gc*
	rm -f *~*

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)

re: fclean all
