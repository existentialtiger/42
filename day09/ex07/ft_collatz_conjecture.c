/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 00:50:18 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 12:48:35 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	result = 0;
	if (base != 1)
	{
		if (base % 2 == 0)
			result += ft_c_(base/2);
		else
			result += ft_c (base * 3 +1);
		result++;
	}
	return (result);
i}
