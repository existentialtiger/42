/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 10:32:24 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/25 21:23:22 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_check(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		while (s2[j] == '*' && s2[j + 1] != '\0')
			j++;
		while (s1[i] != s2[j] && s2[j + 1] == '\0')
			i++;
		if (s2[j] == '*' && s2[j + 1] != '\0')
			return (1);
		else if (s1[i] == '\0' && s2[j] != '\0')
			return (0);

	}
	return (s1[i] - s2[j]);
}

int	match(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 =='\0')
			return (1);
		else
			return (0);
	}
	if (*s2 == '\0')
		return (0);
	return (str_check(s1, s2));
}

int	main(void)
{
	printf("\noutput: %d", match("main.c", "*.c"));
	return (0);
}
