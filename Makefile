# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slathouw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 11:09:49 by slathouw          #+#    #+#              #
#    Updated: 2021/09/02 10:55:47 by slathouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	= ft_isalnum.c, ft_isprint.c, ft_strlen.c, ft_tolower.c, ft_atoi.c \
		  ft_isalpha.c, ft_memset.c, ft_strncmp.c, ft_toupper.c, ft_bzero.c	\
		  ft_isascii.c, ft_strchr.c, ft_strnstr.c, ft_calloc.c, ft_isdigit.c \
	  	  ft_strdup.c, ft_strrchr.c, ft_memcpy.c, ft_memmove.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
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
