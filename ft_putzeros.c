/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putzeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:48:20 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 18:19:45 by agarzon-         ###   ########.fr       */
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

void	ft_putzeros(char *s, size_t l, t_printf *tab)
{
	if (tab->flags == '0')
		ft_zeros(ft_total(l, tab->width), tab);
	else if (tab->punt == '.')
		ft_zeros(ft_total(l - 1, tab->precision), tab);
	ft_putstr_fd(s, 1);
}
