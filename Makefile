NAME = push_swap
LIBFT_PATH = libft
LIBFT = libft.a

SRC_FILES = main.c 
SRC_DIR = srcs/
SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}
OBJ = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pg -g
AR = ar -rcs

%.o: %.c
	${CC} -c -Imlx -c $< -o $@

all: ${NAME}

libf:
	@MAKE -sC ${LIBFT_PATH}

${NAME}: libf ${OBJ}
	${CC} ${LIBFT_PATH}/${LIBFT} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}
	${MAKE} -C ${LIBFT_PATH} clean

fclean: clean
	rm -f ${NAME}
	${MAKE} -C ${LIBFT_PATH} fclean

re: fclean all

.PHONY: all clean flcean re