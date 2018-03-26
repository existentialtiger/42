/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 04:46:04 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/23 05:40:32 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD 24
# include <string.h>

typedef struct		s_perso
{
	char			*name;
	float			life;
	int				age;
	int				profession;
}					t_perso;

#endif
