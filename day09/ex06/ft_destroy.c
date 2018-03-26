/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 23:46:21 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 00:22:11 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (factory[i] != '\0')
	{
		while (factory[i][j] != '\0')
		{
			while (factory[i][j][k] != '\0')
			{
				free(factory[i][j][k]);
				k++;
			}
			j++;
		}
		i++;
	}
}
