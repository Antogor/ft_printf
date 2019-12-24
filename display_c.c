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

void	display_c(int c, t_printf *tab)
{
	int l;
	int total;

	ft_putchar_fd(c, 1);
	tab->br++;
	if (tab->flags == '-')
	{
		l = 1;
		total = tab->width - l;
		ft_put_spaces(total, tab);
	}
}
