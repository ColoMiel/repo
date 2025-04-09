##
## EPITECH PROJECT, 2024
## make
## File description:
## makefile
##

CC = gcc
AR = ar
SRC_LIB = lib/my/basefunction.c \
		  lib/my/is_digit.c \
		  lib/my/my_str_to_word_array.c \
		  lib/my/my_strcmp.c \
		  lib/my/my_strdup.c \
		  lib/my/my_strlen.c \
		  lib/my/str_to_int.c
OBJ_LIB = $(SRC_LIB:.c=.o)
MY_H = my.h
NAME = mixword
SRC_PROG = src/main.c \
	   src/algo.c
OBJ_PROG = $(SRC_PROG:.c=.o)

all: libmy.a $(NAME)

libmy.a: $(OBJ_LIB)
	$(AR) rcs libmy.a $(OBJ_LIB)

$(NAME): libmy.a $(OBJ_PROG)
	$(CC) -o $(NAME) $(OBJ_PROG)

clean:
	rm -f $(OBJ_LIB) $(OBJ_PROG)

fclean: clean
	rm -f libmy.a $(NAME)

re: fclean all clean

coding_style: clean
	cd ../coding-style-checker/ \
	&& ./coding-style.sh ../repo/ \
	&& cd ../repo/ \
	&& make \
	&& clear \
	&& cd ../coding-style-checker/ \
	&& cat coding-style-reports.log

valgrind: fclean
	@(gcc $(SRC) -g3 -o mysh -I../includes -lm)

push:
	@(find . -type f -name "#.#" -delete -o -name "*~" -delete)
	@(rm $(NAME))
	@(git add .)
	@(git commit -m "[ADD] coding style DFS")
	@(git push)
