NAME	= libftprintf.a

SRCS	=	ft_printf.c ft_utils.c

OBJS	=	${SRCS:.c=.o}

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
