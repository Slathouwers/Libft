# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slathouw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 11:09:49 by slathouw          #+#    #+#              #
#    Updated: 2021/09/01 11:11:39 by slathouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	= ft_isalpha.c, ft_isdigit.c, ft_isalnum.c
OBJS	= ${SRCS:.c=.o}
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY: all clean fclean re
