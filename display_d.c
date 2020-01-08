/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:03:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 18:20:29 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	negative_chase(int d, char *s, t_printf *tab, size_t l)
{
	if (d < 0)
	{
		ft_putchar_fd(*s, 1);
		s++;
	}
	ft_putzeros(s, l, tab);
}

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
		ft_put_spaces(q, l, tab);
	else if (tab->flags == '0' && tab->width > (int)l)
		negative_chase(d, q, tab, l);
	else if (tab->punt == '.' && tab->precision > (int)l)
		negative_chase(d, q, tab, l);
	else if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces(q, l, tab);
	else
		ft_putstr_fd(q, 1);
	free(q);
	q = NULL;
}
