/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:19:31 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/15 15:17:35 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_putchar(char c);

int		main(void)
{
	char *str;
	int a;

	str = "helloCATS";
	a = ft_strlen(str);
	ft_putchar('0' + a);
}

