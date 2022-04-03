# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 18:58:43 by rnaamaou          #+#    #+#              #
#    Updated: 2022/04/03 14:31:10 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_SRC = main.c

NAME_OBJ = main.o

HEADER = header.h

MAKE_LIBFT = libft/

LIBFT = libft/libft.a

SRC =  check_errors.c free.c isnumber.c utils.c min_max.c

SRC_OBJ = ${SRC:%c=%o}

FLAGS = -Wall -Wextra -Werror

all : ${NAME}

${LIBFT} :
	make -C ${MAKE_LIBFT}

${NAME} : ${NAME_OBJ} ${SRC_OBJ} ${LIBFT}
	${CC} ${FLAGS} $^ -o ${NAME}

%.o : %.c ${HEADER}
	${CC} ${FLAGS} -c $<
clean :
	rm -f ${SRC_OBJ} ${NAME_OBJ}
	@make clean -C ${MAKE_LIBFT}

fclean : clean
	rm -f ${NAME}
	@make fclean -C ${MAKE_LIBFT}

re : fclean all

.PHONY : clean fclean all re