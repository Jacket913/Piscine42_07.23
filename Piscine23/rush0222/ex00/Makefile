# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 00:01:15 by xabaudhu          #+#    #+#              #
#    Updated: 2023/07/13 19:24:20 by xabaudhu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./do-op

SRCS	=	do-op.c main.c operation.c

OBJS	=	${SRCS:.c=.o}

RM 	=	rm -f	

CFLAGS	=	-Wall -Werror -Wextra


.c.o	=	cc ${CFLAGS} -I do_op.h -c -o $<${<:.c=.o}
$(NAME):	${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all
