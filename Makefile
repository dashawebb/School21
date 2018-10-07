#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 18:48:06 by elchrist          #+#    #+#              #
#    Updated: 2018/10/07 18:53:32 by elchrist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr
SRCS = srcs/main.c srcs/eval_expr.c
#OBJ = $(SRCS: .c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
	bin/rm -f $(OBJ)
fclean: clean
		/bin/rm -f $(NAME)