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

void	ft_spaces_c(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		tab->br++;
		total--;
	}
}

void	display_c(int c, t_printf *tab)
{
	int l;

	l = 1;
	if (tab->atx == '*')
	{
		ft_spaces_c(ft_total(l, tab->ali), tab);
		ft_putchar_fd(c, 1);
		tab->br++;
	}
	else if (tab->flags == '-')
	{
		ft_putchar_fd(c, 1);
		tab->br++;
		ft_spaces_c(ft_total(l, tab->width), tab);
	}
	else
	{
		ft_putchar_fd(c, 1);
		tab->br++;
	}
}
