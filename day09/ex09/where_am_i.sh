# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 02:48:24 by edehmlow          #+#    #+#              #
#    Updated: 2018/03/23 06:00:27 by edehmlow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig | grep "inet " |
awk BEGIN{
if ($2 == \d+\.\d+\.\d+\.\d+)
	print "$2"
else
	print "I am lost!\n"
}
