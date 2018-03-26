/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 21:21:58 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/22 11:12:06 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	*range = (int*)malloc(sizeof(**range) * (max - min + 1));
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
