/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 18:47:22 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/15 20:04:45 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int isneg;

	isneg = 1;
	if (nb < 0)
	{
		isneg = -1;
	}
	if (nb == nb % 10)
	{
		if (isneg == -1)
		{
			ft_putchar('-');
		}
		ft_putchar('0' + nb * isneg);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10) * isneg);
	}
}
