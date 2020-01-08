/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:40:38 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 15:10:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	display_u(unsigned int nb, t_printf *tab)
{
	char	*new;
	size_t	l;

	new = ft_itoi(nb);
	l = ft_strlen(new);
	tab->br += l;
	if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces_char(new, l, tab);
	else if (tab->flags == '0' && tab->width > (int)l)
		ft_putzeros_char(new, l, tab);
	else if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces_char(new, l, tab);
	else if (tab->punt == '.' && tab->precision > (int)l)
		ft_putzeros_char(new, l, tab);
	else
		ft_putstr_fd(new, 1);
	free(new);
	new = NULL;
}
