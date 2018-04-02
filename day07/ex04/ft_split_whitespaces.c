/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:21:15 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/31 18:52:36 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		num_of_items()
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	if (str[0] != ' ')
	{
		counter++;
		i++;
	}
	while(str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && 
				(str[i - 1] == ' ' || str[i - 1] == '\n' ||
				 str[i - 1] == '\t'))
			counter++;
		i++;
	}
	return (counter);
}

char	**ft_split_whitespaces(char *str)
{
	 int 	i;
	 int 	items;
	 char	**string;

	 i = 0;
	 items = num_of_items(str);
	 *string = (char*)malloc(sizeof(**string) * (items + 1));

}
