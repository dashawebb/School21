#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elchrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 20:28:41 by elchrist          #+#    #+#              #
#    Updated: 2018/10/01 20:56:56 by elchrist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		 srcs/ft_strlen.c srcs/	ft_swap.c
HEADER = includes/ft.h
FLAGS = -Wall -Wextra -Werror
OPTION = -c $(HEADER)
SRC = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c \
		$(SRCS)ft_strlen.c $(SRCS)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all


