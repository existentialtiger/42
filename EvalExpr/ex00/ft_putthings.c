/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putthings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:15:13 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/31 18:53:00 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int isneg;

	isneg = 1;
	if (nb < 0)
		isneg = -1;
	if (nb == nb % 10)
	{
		if (isneg == -1)
			ft_putchar('-');
		ft_putchar('0' + nb * isneg);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10) * isneg);
	}
}
