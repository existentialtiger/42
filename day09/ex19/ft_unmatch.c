/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:06:00 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 13:12:32 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length && tab[i] != tab[j])
		{ 
			j++;
		}
		if (tab[i] == tab[j])
			i++;
		else
			return (i);
	}
}
