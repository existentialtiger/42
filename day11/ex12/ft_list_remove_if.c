/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:03:53 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 23:17:39 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;
	t_list	*temp2;

	temp = *begin_list;
	while (temp)
	{
		if ((*cmp)(temp->next->data, data_ref) == 0)
		{
			if(temp->next->next)
			{
				temp2 = temp->next;
				temp->next = temp->next->next;
				free(temp2);
			}
			else
				temp = 0;
		}
		temp = temp->next;
	}
}
