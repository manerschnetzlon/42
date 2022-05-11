# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 17:55:28 by mschnetz          #+#    #+#              #
#    Updated: 2022/02/22 19:27:45 by mschnetz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

HEAD	= includes

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}	

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
		
.PHONY:		all clean fclean re
