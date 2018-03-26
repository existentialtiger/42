/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 09:36:55 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/19 10:14:19 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
