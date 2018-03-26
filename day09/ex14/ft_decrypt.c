/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 08:11:48 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 09:26:30 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int		person_num(char *str)
{
	int i;
	int counter;

	counter = 0;
	i =0;
	while (str[i] != '\0')
	{
		if (str[i] == ';')
			counter++;
		i++;
	}
	return (counter);
}


t_perso	**ft_decrypt(char *str)
{
	t_perso *persons;
	int i;
	int j;
	int k;

	persons = (t_perso*)malloc(sizeof(*t_perso) * (person_num(str) + 1)); //???????????
	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] != '|')
		{
			person[j][k] = str[i];//age?
			i++;
			k++;
		}
		i++; //to get past '|'
		j++;
		while (str[i] != ';')
		{
			person[j][k] = str[i];//name?
			i++;
			k++;
		}
		i++; //to get past ';'
	}
}
