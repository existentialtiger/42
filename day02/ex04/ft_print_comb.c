/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 18:14:13 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/14 22:28:30 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(int i, int j, int k)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar('0' + k);
	if (!(i == 7 && j == 8 && k == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
