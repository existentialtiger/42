/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:08:30 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/31 18:53:05 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

t_node	*ft_create_node(void *data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}
