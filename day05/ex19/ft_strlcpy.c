/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 10:29:13 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/20 10:46:51 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		while (dest[j] != '\0' && j < size)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		i++;
	}
	dest[j] = '\0';
	return (i);
}
