/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:01:49 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 21:49:29 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	counter;
	t_list			*temp;
	
	counter = 0;
	temp = begin_list;
	while (temp && (counter != nbr))
	{
		temp =  temp->next;
		counter++;
	}
	if (counter	!= nbr)
		temp = 0;
	return (temp);
}
