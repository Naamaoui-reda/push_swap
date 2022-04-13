# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 18:58:43 by rnaamaou          #+#    #+#              #
#    Updated: 2022/04/13 18:17:01 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_SRC = main.c

NAME_OBJ = main.o

HEADER = header.h

CHECKER = checker

BONUS = ${CHECKER}

BONUS_SRC = checker.c\
			checker_utils.c

MAKE_LIBFT = libft/

LIBFT = libft/libft.a

SRC =  check_errors.c free.c isnumber.c utils.c min_max.c absolute.c move.c moves.c\
		sort_small_numbers.c sort_utils.c sort.c utils2.c subsequence.c get_next_line.c

SRC_OBJ = ${SRC:%c=%o}

BONUS_OBJ = ${BONUS_SRC:%.c=%.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

all : ${NAME}

bonus : ${CHECKER}

${LIBFT} :
	make -C ${MAKE_LIBFT}

${NAME} : ${NAME_OBJ} ${SRC_OBJ} ${LIBFT}
	${CC} ${FLAGS} $^ -o ${NAME}

${CHECKER} : ${BONUS_OBJ} ${SRC_OBJ} ${LIBFT}
	${CC} ${FLAGS} $^ -o ${BONUS}

%.o : %.c ${HEADER}
	${CC} ${FLAGS} -c $<
clean :
	rm -f ${SRC_OBJ} ${NAME_OBJ}
	rm -f ${BONUS_OBJ}
	@make clean -C ${MAKE_LIBFT}

fclean : clean
	rm -f ${NAME}
	rm -f ${BONUS}
	@make fclean -C ${MAKE_LIBFT}

re : fclean all

.PHONY : clean fclean all re bonus