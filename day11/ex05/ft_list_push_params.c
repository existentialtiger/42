/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:53:12 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 20:30:43 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*params;
	t_list	*temp;

	i = 0;
	params = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = params;
		params = temp;
		i++;
	}
	return (params);
}
