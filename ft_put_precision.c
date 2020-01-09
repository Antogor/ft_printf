/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:39:24 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/09 13:30:57 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_comp_negative(int nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

void	chase_nb(char *s, int nb, size_t len, t_printf *tab)
{
	int l;
	int ls;

	l = ft_comp_negative(nb);
	ls = ft_comp_negative(nb);
	if (tab->precision >= (int)len)
	{
		l += ft_total(len, tab->precision);
		ls = l + len;
	}
	else
	{
		l = 0;
		ls = len;
	}
	if (tab->width > ls)
		ft_put_spaces(ft_total(ls, tab->width), tab);
	if (nb < 0)
	{
		ft_putchar_fd(*s, 1);
		s++;
	}
	if (tab->precision > l)
		ft_putzeros(l, tab);
	ft_putstr_fd(s, 1);
}

void	chase_line(char *s, int nb, size_t len, t_printf *tab)
{
	int l;
	int ls;

	l = 0;
	ls = 0;
	if (nb < 0)
	{
		ft_putchar_fd(*s, 1);
		s++;
		l += 1;
	}
	if (tab->precision >= (int)len)
	{
		l += ft_total(len, tab->precision);
		ft_putzeros(l, tab);
		l += len;
	}
	else
		l = len;
	ft_putstr_fd(s, 1);
	if (tab->width > l)
		ft_put_spaces(ft_total(l, tab->width), tab);
}

void	ft_put_precision(char *s, int nb, size_t len, t_printf *tab)
{
	if (tab->flags == '-')
		chase_line(s, nb, len, tab);
	else if (tab->flags == '0' || tab->flags == 1)
		chase_nb(s, nb, len, tab);
}
