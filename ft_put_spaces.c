/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:47:22 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 10:47:30 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_spaces(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		tab->br++;
		total--;
	}
}

void	ft_put_spaces(int nb, size_t l, t_printf *tab)
{
	if (tab->flags == 1)
	{
		ft_spaces(ft_total(l, tab->width), tab);
		ft_putnbr_fd(nb, 1);
	}
	else if (tab->flags == '-')
	{
		ft_putnbr_fd(nb, 1);
		ft_spaces(ft_total(l, tab->width), tab);
	}
}
