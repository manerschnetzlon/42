SRCS	= *.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

HEAD	= includes

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
