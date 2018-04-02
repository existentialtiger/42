/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:09:24 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/27 16:32:03 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}
int main()
{
	t_list* list = 0;
	ft_list_push_front(&list, "asdf");
	crap_a_list(list);
	ft_list_push_front(&list, "qwer");
	ft_list_push_front(&list, "zxcv");
	crap_a_list(list);
	list = 0;
	ft_list_push_front(&list, "uiop");
	ft_list_push_front(&list, "hjkl");
	crap_a_list(list);
}
