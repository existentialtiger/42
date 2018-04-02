# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 13:26:38 by edehmlow          #+#    #+#              #
#    Updated: 2018/03/27 15:41:23 by edehmlow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	 srcs/ft_swap.c

INCLUDE = includes/*.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -o $(FLAGS) $(NAME) $(SRC) $(INCLUDE)

clean:
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
