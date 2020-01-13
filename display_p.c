/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:39:46 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 13:33:13 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	display_p(long int p, t_printf *tab)
{
	char	*memory;
	char	*substr;
	size_t	l;

	memory = ft_convert_memory(p);
	l = ft_strlen(memory);
	tab->br += l;
	if (tab->punt == '.' && tab->p == 0 && tab->precision > 0)
	{
		substr = ft_substr(memory, 2, l);
		ft_putstr_fd("0x", 1);
		ft_put_precision(substr, 0, l - 2, tab);
		free(substr);
		substr = NULL;
	}
	else
	{
		if (tab->p == 0 && tab->precision == 0 && tab->punt == '.')
		{
			tab->br--;
			if (tab->flags == 1 && tab->width > (int)l)
				ft_put_spaces(ft_total(l - 1, tab->width), tab);
			ft_putstr_fd("0x", 1);
		}
		else
		{
			if (tab->flags == 1 && tab->width > (int)l)
				ft_put_spaces(ft_total(l, tab->width), tab);
			ft_putstr_fd(memory, 1);
			if (tab->flags == '-' && tab->width > (int)l)
				ft_put_spaces(ft_total(l, tab->width), tab);
		}
	}
	free(memory);
	memory = NULL;
}
