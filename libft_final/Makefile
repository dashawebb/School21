# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 18:23:58 by elchrist          #+#    #+#              #
#    Updated: 2018/12/07 19:00:35 by elchrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OBJ = *.o

OPTION = -c

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	gcc $(OPTION) $(FLAGS) -I. $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
