/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:39:24 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 17:24:07 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_zeros_precision(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		tab->br++;
		total--;
	}
}

void	ft_put_precision(int nb, size_t len, t_printf *tab)
{
	int l;

	if (tab->precision > (int)len)
	{
		l = ft_total(len, tab->precision);
		if (nb < 0)
		{
			l += 1;
			nb *= -1;
			ft_putchar_fd('-', 1);
			ft_zeros_precision(l, tab);
		}
		else
			ft_zeros_precision(l, tab);
		l += len;
	}
	else
		l = len;
	if (tab->width > l)
		ft_put_spaces(nb, l, tab);
	else
		ft_putnbr_fd(nb, 1);
	
}
