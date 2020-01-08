/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putzeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:48:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 15:23:41 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_zeros(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		tab->br++;
		total--;
	}
}

void	ft_putzeros(int d, size_t l, t_printf *tab)
{
	if (d < 0)
	{
		d *= -1;
		ft_putchar_fd('-', 1);
		if (tab->flags == '0')
			ft_zeros(ft_total(l - 1, tab->width), tab);
		else if (tab->punt == '.')
			ft_zeros(ft_total(l, tab->precision), tab);
		ft_putnbr_fd(d, 1);
	}
	else
	{
		if (tab->flags == '0')
			ft_zeros(ft_total(l, tab->width), tab);
		else if (tab->punt == '.')
			ft_zeros(ft_total(l, tab->precision), tab);
		ft_putnbr_fd(d, 1);
	}
}
