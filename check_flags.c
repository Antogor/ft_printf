/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/17 16:22:10 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	check_flags(const char *s, int l, va_list args)
{
	t_print type;

	if (s[l] == 'd' || s[l] == 'i')
	{
		type.d = va_arg(args, int);
		ft_putnbr_fd(type.d, 1);
	}
	else if (s[l] == 'c')
	{
		type.c = va_arg(args, int);
		ft_putchar_fd(type.c, 1);
	}
	else if (s[l] == 's')
	{
		type.s = va_arg(args, char *);
		ft_putstr_fd(type.s, 1);
	}
	else if (s[l] == 'X' || s[l] == 'x')
	{
		type.h = va_arg(args, int);
		convert_hexa(type.h, s[l]);
	}
}
