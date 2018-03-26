/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 13:20:04 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/19 15:41:37 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_white_space(char w)
{
	return (w == '\t' || w == '\n' || w == '\v' || w == '\f'
			|| w == '\r' || w == ' ');
}

int		ft_atoi(char *str)
{
	int i;
	int isneg;
	int nb;

	i = 0;
	isneg = 1;
	nb = 0;
	while (is_white_space(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (int)str[i] - '0';
		i++;
	}
	return (nb * isneg);
}
