/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:09:24 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 14:54:51 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	print_list(t_list *list)
{
	while (list->next != NULL)
	{
		printf("%s\n" , list->data);
		list = list->next;
	}
	printf("%s\n" , list->data);
}

int	 main(void)
{
	t_list* item = ft_create_elem("asdf");
	printf("%s\n", (char*)item->data);
	printf("%p\n", item->next);
	return (0);
}
