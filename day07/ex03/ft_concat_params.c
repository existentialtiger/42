/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 11:21:06 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/22 18:26:07 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_all_strlen(int argc, char **argv)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (i < argc)
	{
		counter = ft_strlen(argv[i]);
		i++;
	}
	return (counter);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char*)malloc(sizeof(*str) * (ft_all_strlen(argc, argv) + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		if (i != argc - 1)
			str[k] = '\n';
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
