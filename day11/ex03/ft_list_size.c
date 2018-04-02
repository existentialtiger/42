/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:52:39 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 20:59:41 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		counter;

	counter = 0;
	ptr = begin_list;
	if (ptr)
	{
		counter++;
		while (ptr->next)
		{
			ptr = ptr->next;
			counter++;
		}
	}
	return (counter);
}
