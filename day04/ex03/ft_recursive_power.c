/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 15:24:36 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/17 17:28:13 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int i;

	if (power < 0)
	{
		return 0;
	}
	if (power == 0)
	{
		return 1;
	}
	if (power >= 1)
	{
		if (power % 2 != 0)
		{
			nb = nb * ft_recursive_power(nb, power - 1);
		}
		else 
		{
			i = ft_recursive_power(nb, power / 2);
			nb = i * i;
		}
	}
	return nb;
}
