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

void	display_d(int d, t_printf *tab)
{
	char	*q;
	size_t	l;

	q = ft_itoa(d);
	l = ft_strlen(q);
	tab->br += l;
	if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces(d, l, tab);
	else if (tab->flags == '0' && tab->width > (int)l)
		ft_putzeros(d, l, tab);
	else if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces(d, l, tab);
	else
		ft_putnbr_fd(d, 1);
}
