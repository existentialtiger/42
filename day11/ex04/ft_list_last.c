/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:11:23 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 21:14:41 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *ptr;

	ptr = begin_list;
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
	}
	return (ptr);
}
