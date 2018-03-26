/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 03:55:37 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 04:14:37 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;

	temp = *b;
	*b = ****d;
	***d = *******c;
	*******c = ***a;
	***a = temp;
}