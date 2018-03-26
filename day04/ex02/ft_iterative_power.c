/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 15:24:36 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/17 17:26:38 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (power >= 1)
	{
		total = total * nb;
		power--;
	}
	return (tota)l;
}
