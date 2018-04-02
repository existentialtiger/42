/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:48:03 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 22:53:36 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), 
		void *data_ref, int (*cmp)())
{
	t_list	*temp;
	
	temp = begin_list;
	while (temp)
	{
		if ((*cmp)(temp->data, data_ref) == 0)
			(*f)(temp->data);
		temp = temp->next;
	}
}
