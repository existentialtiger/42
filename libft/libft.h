/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 11:22:35 by edehmlow          #+#    #+#             */
/*   Updated: 2018/03/24 13:20:03 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

//ft_putchar 		dayXX 	exXX		#write
void	ft_putchar(char c);
//ft_swap 			day03 	ex02
void	ft_swap(int *a, int *b);
//ft_div_mod 		day03 	ex04
void	ft_div_mod(int a, int b, int *div, int *mod);
//ft_putstr 		day03 	ex05		#write
void	ft_putstr(char *str);
//ft_strlen 		day03 	ex06
int		ft_strlen(char *str);
//ft_putnbr 		day05 	ex01		#write
void	ft_putnbr(int nb);
//ft_atoi 			day05	ex02
int		ft_atoi(char *str);
//ft_strcpy			day05	ex03
char	*ft_strcpy(char *dest, char *src);
//ft_strstr			day05	ex05
char	*ft_strstr(char *str, char *to_find);
//ft_strcmp			day05	ex06
int		ft_strcmp(char *s1, char *s2);
//ft_strupcase		day05	ex08
char	*ft_strupcase(char *str);
//ft_strlowercase	day05	ex09
char	*ft_strlowcase(char *str);
//ft_strcapitalize	day05	ex10		could be better
char	*ft_strcapitalize(char *str);
//ft_str_is_alpha	day05	ex11
int		ft_str_is_alpha(char *str);
//ft_str_is_numeric	day05	ex12
int		ft_str_is_numeric(char *str);
//ft_str_is_lowercase	day05	ex13
int		ft_str_is_lowercase(char *str);
//ft_str_is_uppercase	day05	ex14
int		ft_str_is_uppercase(char *str);
//ft_str_is_printable	day05	ex15
int		ft_str_is_printable(char *str);
//ft_strcat			day05	ex16
char	*ft_strcat(char *dest, char *src);
//ft_strdup			day07	ex00	#malloc
char	*ft_strdup(char *src);

#endif
