/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:31:10 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/19 21:18:32 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	str = ft_strlowcase(str);
	i = 0;
	if ((str[0] >= 65 && str[i] <= 90) || (str[0] >= 97 && str[i] <= 122))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48 && str[i] <= 57) ||
				(str[i] >= 65 && str[i] <= 90) ||
				(str[i] >= 97 && str[i] <= 122)))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
