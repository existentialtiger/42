/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 00:03:56 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/20 21:32:14 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i =  ;
	if (size == 0)
		return (ft_strlen(dest) - 1);
	if (ft_strlen(dest) < size - 1)
	
	
	
	while (dest[i] != '\0' && i < size)
	{
		i++;
		if (fawe)

	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
		dest[j] = '\0';
	if (size < j)
		j = size;
	return(i + j);
}
