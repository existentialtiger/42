/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:34:57 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/16 09:18:20 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	help;

	i = ft_strlen(str) - 1;
	j = 0;
	while (j < i)
	{
		help = str[j];
		str[j] = str[i];
		str[i] = help;
		j++;
		i--;
	}
	return (str);
}
