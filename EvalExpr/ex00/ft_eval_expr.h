/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 17:29:24 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/31 18:53:03 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

typedef strict		s_node
{
	struct s_node	*next;
	void			*data;
}					t_node;

t_node				*ft_create_node(void *data);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
int					eval_expr(*str);


#endif
