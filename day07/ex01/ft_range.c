/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 21:21:58 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/21 22:00:32 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	range = (int*)malloc(sizeof(*range) * (max - min + 1));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
