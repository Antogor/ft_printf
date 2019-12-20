/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:03:45 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 11:04:05 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	display_c(int c, int spaces, char f)
{
	int l;
	int total;

	l = 1;
	total = spaces - l;
	ft_putchar_fd(c, 1);
	if (f == '-')
	{
		while (total > 0)
		{
			ft_putchar_fd(' ', 1);
			total--;
		}
	}
}
