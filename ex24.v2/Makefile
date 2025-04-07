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
SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECT = $(SOURCE:.c=.o)

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(FLAGS) -I includes -c $< -o ${<:.c=.o}

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

all: $(NAME)

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
