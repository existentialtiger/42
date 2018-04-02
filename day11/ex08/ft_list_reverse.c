/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:56:39 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/28 15:19:08 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp;
	t_list	*temp_next;

	temp = *begin_list;
	if (temp == 0 || temp->next == 0)
		return ;
	temp_next = temp->next;
	temp->next = 0;
	while (temp_next)
	{
		temp = temp_next;
		temp_next = temp->next;
		temp->next = *begin_list;
		*begin_list = temp;
	}
}
