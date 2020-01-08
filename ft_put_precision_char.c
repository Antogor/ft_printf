/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_precision_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:39:24 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 17:48:51 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_spaces_precision(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		tab->br++;
		total--;
	}
}

void	ft_put_precision_char(char *s, size_t len, t_printf *tab)
{
	int l;

	if (tab->width > (int)len)
	{
		l = ft_total(len, tab->precision);
		ft_spaces_precision(ft_total(l += len, tab->width), tab);
	}
	else
	{
		l = len;
		ft_putzeros_char(s, l, tab);
	}	
}
