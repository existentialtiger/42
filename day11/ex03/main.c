/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:09:24 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 18:02:11 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
#define CE(data) ft_create_elem(data)

t_list	*ft_create_elem(void *data);
int ft_list_size(t_list *begin_list);

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}
int main()
{
	t_list* list = 0;
	printf("%d\n", ft_list_size(list));
	list = CE("asdf");
	printf("%d\n", ft_list_size(list));
//	list->next = CE("qwer");
//	list->next->next = CE("zxcv");
//	printf("%d\n", ft_list_size(list));
//	list = CE("asdf");
//	list->next = CE("asdf");
//	list->next->next = CE("asdf");
//	list->next->next->next = CE("asdf");
//	printf("%d\n", ft_list_size(list));
//	list->next->next->next->next = CE("asdf");
//	printf("%d\n", ft_list_size(list));
}
