/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 21:49:34 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 00:34:04 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 74) || (str[i] >= 97 && str[i] <= 106))
		{
			str[i] = str[i] + 16;
		}
		else if ((str[i] >= 75 && str[i] <= 90) ||
				(str[i] >= 107 && str[i] <= 122))
		{
			str[i] = str[i] - 10;
		}
		i++;
	}
	return (str);
}
