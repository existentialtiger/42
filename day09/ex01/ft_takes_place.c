/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:44:11 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/22 19:50:58 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		set_hour(int hour)
{
	if (hour == 0)
		return (12);
	if (hour > 12)
		return (hour - 12);
	return (hour);
}

int		set_hour_two(int hour)
{
	int hr_two;

	if (hour > 12)
		hour = hour - 12;
	if (hour != 12)
		hr_two = hour + 1;
	else
		hr_two = 1;
	return (hr_two);
}

void	ft_takes_place(int hour)
{
	int		hr_two;
	char	ap;
	char	ap_hr_two;

	ap = 'A';
	ap_hr_two = 'A';
	if (hour != 23)
	{
		if (hour > 11)
		{
			ap = 'P';
			ap_hr_two = 'P';
		}
		else if (hour == 11)
			ap_hr_two = 'P';
	}
	else
		ap = 'P';
	hr_two = set_hour_two(hour);
	hour = set_hour(hour);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%i.00 %c.M. AND %i.00 %c.M.\n", hour, ap, hr_two, ap_hr_two);
}
