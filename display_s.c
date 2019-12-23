/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:04:28 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 11:12:05 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	put_spaces(char *s, size_t l, int spaces, t_printf *tab)
{
	int total;

	if ((int)l < spaces)
		total = spaces - l;
	else
		total = l - spaces;
	if (spaces > (int)l)
	{
		while (total > 0)
		{
			ft_putchar_fd(' ', 1);
			tab->br++;
			total--;
		}
	}
}

void	display_s(char *s, t_printf *tab)
{
	char	*str;
	size_t	l;

	if (tab->punt == '.')
	{
		str = ft_substr(s, 0, tab->precision);
		ft_putstr_fd(str, 1);
		if ( tab->flags == '-')
		{
			l = ft_strlen(str);
			tab->br += l;
			put_spaces(str, l, tab->width, tab);
		}
		free(str);
		str = NULL;
	}
	else
	{
		ft_putstr_fd(s, 1);
		l = ft_strlen(s);
		tab->br += l;
		if (tab->flags == '-')
			put_spaces(s, l, tab->width, tab);
	}
}
