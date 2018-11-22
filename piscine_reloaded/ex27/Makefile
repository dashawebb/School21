#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 22:08:26 by elchrist          #+#    #+#              #
#    Updated: 2018/11/21 23:27:31 by elchrist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRCS = main.c
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
		gcc $(FLAGS) $(SRCS) -o $(NAME)

clean :
			rm -f *.o

fclean : 	clean
			rm -f $(NAME)

re :		fclean all
