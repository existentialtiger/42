/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:28:05 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/19 12:48:03 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char			str1[] = "hello";
	char			str2[] = "abcdefghijk";
	unsigned int 	n = 4;
	char			value;

	value = *ft_strncpy(str2, str1, n);
	return (0);
}
