/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:35:59 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/18 13:14:25 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_putzeros(int d, char f, int total)
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

void	display_d(int d, int spaces, char f)
{
	char *q;
	size_t l;
	int total;

	q = ft_itoa(d);
	l = ft_strlen(q);
	if ((int)l < spaces)
		total = spaces - l;
	else
		total = l - spaces;
	if (f == '-' && spaces > (int)l)
	{
		ft_putnbr_fd(d, 1);
		while (total > 0)
		{
			ft_putchar_fd(' ', 1);
			total--;
		}
	}
	else if (f == '0' && spaces > (int)l)
		ft_putzeros(d, f, total);
	else
		ft_putnbr_fd(d, 1);
}
