/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:39:46 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/09 11:20:08 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	display_p(long int p, t_printf *tab)
{
	char	*memory;
	size_t	l;

	memory = ft_convert_memory(p);
	l = ft_strlen(memory);
	tab->br += l;
	if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces(ft_total(l, tab->width), tab);
	ft_putstr_fd(memory, 1);
	if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces(ft_total(l, tab->width), tab);
	free(memory);
	memory = NULL;
}
