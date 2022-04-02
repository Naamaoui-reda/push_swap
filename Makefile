# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 18:58:43 by rnaamaou          #+#    #+#              #
#    Updated: 2022/04/02 20:00:21 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_SRC = main.c

NAME_OBJ = main.o

HEADER = header.h

LIBFT = libft/libft.a

MAKE_LIBFT = libft/

SRC = check_errors.c isnumber.c utils.c free.c

SRC_OBJ = ${SRC:%c=%o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${LIBFT} :
	@make -C ${MAKE_LIBFT}

${NAME} : ${NAME_OBJ} ${SRC_OBJ} ${LIBFT}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean :
	rm -f ${SRC_OBJ} ${NAME_OBJ}
	@make clean -C ${MAKE_LIBFT}
	

fclean : clean
	rm -f ${NAME}
	@make fclean -C ${MAKE_LIBFT}

re : fclean all

.PHONY : clean fclean all re