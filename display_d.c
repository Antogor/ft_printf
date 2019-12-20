/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:35:59 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 10:58:12 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_putzeros(int d, int total)
{
	if (d < 0)
	{
		d *= -1;
		ft_putchar_fd('-', 1);
		while (total > 0)
		{
			ft_putchar_fd('0', 1);
			total--;
		}
		ft_putnbr_fd(d, 1);
	}
	else
	{
		while (total > 0)
		{
			ft_putchar_fd('0', 1);
			total--;
		}
		ft_putnbr_fd(d, 1);
	}
}

void	display_d(int d, t_printf *tab)
{
	char	*q;
	size_t	l;
	int		total;

	q = ft_itoa(d);
	l = ft_strlen(q);
	if ((int)l < tab->width)
		total = tab->width - l;
	else
		total = l - tab->width;
	if (tab->flags == '-' && tab->width > (int)l)
	{
		ft_putnbr_fd(d, 1);
		while (total > 0)
		{
			ft_putchar_fd(' ', 1);
			total--;
		}
	}
	else if (tab->flags == '0' && tab->width > (int)l)
		ft_putzeros(d, total);
	else
		ft_putnbr_fd(d, 1);
	tab->len += l;
}
