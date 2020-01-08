/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:46:51 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 18:16:22 by agarzon-         ###   ########.fr       */
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

void	ft_put_spaces(char *s, size_t l, t_printf *tab)
{
	if (tab->flags == 1)
	{
		ft_spaces(ft_total(l, tab->width), tab);
		ft_putstr_fd(s, 1);
	}
	else if (tab->flags == '-')
	{
		ft_putstr_fd(s, 1);
		ft_spaces(ft_total(l, tab->width), tab);
	}
}
