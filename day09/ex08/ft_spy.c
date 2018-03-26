/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 01:50:07 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 03:42:01 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		ft_strcmp_president(char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i] == '\t' || s1[i] == '\n' || s1[i] == '\v' || s1[i] == '\f'
			|| s1[i] == '\r' || s1[i] == ' ')
		i++;
	s2 = "president";
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int		ft_strcmp_attack(char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i] == '\t' || s1[i] == '\n' || s1[i] == '\v' || s1[i] == '\f'
			|| s1[i] == '\r' || s1[i] == ' ')
		i++;
	s2 = "attack";
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int		ft_strcmp_bauer(char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i] == '\t' || s1[i] == '\n' || s1[i] == '\v' || s1[i] == '\f'
			|| s1[i] == '\r' || s1[i] == ' ')
		i++;
	s2 = "bauer";
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	int		check;

	i = -1;
	j = -1;
	check = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			while (argv[i][j] != '\0')
			{
				str = ft_strlowcase(&argv[i][j]);
				if (ft_strcmp_president(str) || ft_strcmp_attack(str) ||
						ft_strcmp_bauer(str))
					check = 1;
				j++;
			}
		}
	}
	if (check == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}
