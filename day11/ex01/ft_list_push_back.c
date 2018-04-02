/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:00:21 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 16:33:14 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;

	ptr = *begin_list;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
