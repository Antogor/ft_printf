/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 12:14:14 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		check_flags(const char *s, t_printf *tab)
{
	tab->flags = 0;
	tab->punt = 0;
	tab->atx = 0;
	tab->precision = 0;
	tab->width = 0;
	tab->type = 0;
	tab->flags = ft_flags(s, tab);
		if (tab->flags == -1)
			return (-1);
	tab->width = ft_width(s, tab, tab->flags);
	tab->punt = ft_punt(s, tab);
	tab->precision = ft_precision(s, tab);
	tab->atx = ft_atx(s, tab);
	tab->type = ft_type(s, tab);
	ft_conversion(tab);
	return (0);
}	
