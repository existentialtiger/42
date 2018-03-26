/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 12:49:22 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/17 17:00:51 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb >= 13)
	{
		return (0);
	}
	if (nb != 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
