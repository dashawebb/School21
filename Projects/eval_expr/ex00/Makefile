#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 21:02:28 by elchrist          #+#    #+#              #
#    Updated: 2018/10/07 21:04:48 by elchrist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr


SRC += main.c
SRC += functions.c
SRC += eval_expr.c


OBJ  = $(SRC:.c=.o)


all: $(NAME)


$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc $(OBJ) -o $(NAME)


clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all
