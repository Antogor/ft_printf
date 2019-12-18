/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:35:59 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/18 12:35:03 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	display_d(int d, int spaces, char f)
{
	char *q;
	size_t l;
	int total;

	q = ft_itoa(d);
	l = ft_strlen(q);
	total = l - spaces;
	if (f == '-')
	{
		ft_putnbr_fd(d, 1);
		while (total > 0)
			{
		ft_putchar_fd(' ', 1);
			total--;
		}
	}
	else if (f == '0')
	{
		while (total > 0)
			{
			ft_putchar_fd('0', 1);
				total--;
			}
		ft_putnbr_fd(d, 1);
	}
}
