/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:04:28 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 11:12:05 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_put_normal(char *s, t_printf *tab)
{
	size_t	l;

	l = ft_strlen(s);
	tab->br += l;
	if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces_char(s, l, tab);
	else if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces_char(s, l, tab);
	else
		ft_putstr_fd(s, 1);
}

void	ft_put_punt(char *s, t_printf *tab)
{
	char	*str;
	size_t	l;

	str = ft_substr(s, 0, tab->precision);
	l = ft_strlen(str);
	tab->br += l;
	if (tab->flags == 1 && tab->width > (int)l)
			ft_put_spaces_char(str, l, tab);
	else if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces_char(str, l, tab);
	else
		ft_putstr_fd(str, 1);
	free(str);
	str = NULL;
}

void	display_s(char *s, t_printf *tab)
{
	if (tab->punt == '.')
		ft_put_punt(s, tab);
	else
		ft_put_normal(s, tab);
}
