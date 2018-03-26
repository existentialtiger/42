/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 08:44:00 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/15 19:18:50 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int counter;
	int length;
	int isneg;

	counter = 1;
	length = 1;
	isneg = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		isneg = -1;
	}
	while (nb / counter > 0)
	{
		counter = counter * 10;
		length++;
	}
	while (length > 0)
	{
		ft_putchar('0' + nb / counter * isneg);
		nb = nb % counter;
		length--;
		counter = counter / 10;
	}
}
