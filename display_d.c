/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:03:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 17:57:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	display_d(int d, t_printf *tab)
{
	char	*q;
	size_t	l;

	q = ft_itoa(d);
	l = ft_strlen(q);
	tab->br += l;
	if (tab->punt == '.' && tab->flags == '-')
		ft_put_precision(d, l, tab);
	else if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces_char(q, l, tab);
	else if (tab->flags == '0' && tab->width > (int)l)
	{
		if (d < 0)
		ft_putchar_fd(*q, 1);
		q++;
		ft_putzeros_char(q, l, tab);
	}
	else if (tab->punt == '.' && tab->precision > (int)l)
		ft_putzeros(d, l, tab);
	else if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces(d, l, tab);
	else
		ft_putstr_fd(q, 1);
}
