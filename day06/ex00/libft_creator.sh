# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 16:01:44 by edehmlow          #+#    #+#              #
#    Updated: 2018/03/20 21:21:51 by edehmlow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c \
	ft_strcmp.c 
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
