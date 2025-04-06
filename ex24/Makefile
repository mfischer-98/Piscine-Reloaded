# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 14:03:16 by mefische          #+#    #+#              #
#    Updated: 2025/04/06 15:19:50 by mefische         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/

OBJECT = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME)
	cc -Wall -Wextra -Werror -c $(SOURCE) -I $(HEADER)
	ar rc $(NAME) $(OBJECT)

clean
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all