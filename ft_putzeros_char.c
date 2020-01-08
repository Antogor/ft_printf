/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putzeros_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:48:20 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 15:02:02 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_zeros_char(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		tab->br++;
		total--;
	}
}

void	ft_putzeros_char(char *s, size_t l, t_printf *tab)
{
	if (tab->flags == '0')
		ft_zeros_char(ft_total(l, tab->width), tab);
	else if (tab->punt == '.')
		ft_zeros_char(ft_total(l, tab->precision), tab);
	ft_putstr_fd(s, 1);
}
