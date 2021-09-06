# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 11:59:30 by slathouw          #+#    #+#              #
#    Updated: 2021/09/06 13:24:31 by slathouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slathouw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 11:09:49 by slathouw          #+#    #+#              #
#    Updated: 2021/09/02 11:32:19 by slathouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
SRCS 		= ft_isalnum.c ft_isprint.c ft_strlen.c ft_tolower.c ft_atoi.c \
			ft_isalpha.c ft_memset.c ft_strncmp.c ft_toupper.c ft_bzero.c	\
			ft_isascii.c ft_strchr.c ft_strnstr.c ft_calloc.c ft_isdigit.c \
			ft_strdup.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_memchr.c ft_memcmp.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c	\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
BONUSSRCS 	= 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS		= ${SRCS:.c=.o}
BONUSOBJS	= ${BONUSSRCS:.c=.o}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}
bonus :	${OBJS} ${BONUSOBJS}
			ar rc ${NAME} ${OBJS} ${BONUSOBJS}
			ranlib ${NAME}

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY: 	all clean fclean re bonus
