#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 14:27:24 by rschuppe          #+#    #+#              #
#    Updated: 2018/10/07 14:27:25 by rschuppe         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=colle-2
SRCS=srcs/main.c srcs/ft_get_rush_size.c srcs/ft_get_rush_type.c srcs/ft_validate_rush.c srcs/utils.c
INCLUDES=includes

all:
	gcc -Wall -Wextra -Werror -I$(INCLUDES) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all