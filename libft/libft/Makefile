# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 18:23:58 by elchrist          #+#    #+#              #
#    Updated: 2018/11/29 23:57:42 by elchrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/*.c

OBJ = *.o

OPTION = -c

INCLUDES = ./includes

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) -I $(INCLUDES) $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
