#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 20:30:10 by elchrist          #+#    #+#              #
#    Updated: 2018/11/21 21:11:12 by elchrist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER = includes/ft.h
FLAGS = -Wall -Wextra -Werror
COMPIL = -c $(HEADER)
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
		gcc $(FLAGS) $(COMPIL) $(SRCS)
		ar rc $(NAME) $(OBJ)

clean :
		rm -f  $(OBJ)
fclean :clean
		rm -f $(NAME)
re :	fclean all 