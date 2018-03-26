/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 12:49:22 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/17 16:55:02 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int total;
	int check;

	total = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
		check = total;
		total = total * nb;
		if (check != total / nb)
		{
			return (0);
		}
		nb--;
	}
	return (total);
}
