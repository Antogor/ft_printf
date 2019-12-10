/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:53:36 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/10 14:41:49 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_printf(const char *s, ...)
{
	va_list args;
	int l;

	va_start (args, s);
	l = 0;
	while (s[l] != '\0')
	{
		if (s[l] == '%')
		{
			l++;
			if (s[l] == '%')
				ft_putchar_fd('%', 1);
			else
				check_flags(s, l, va_arg(args, int));
		}
		else
			ft_putchar_fd(s[l], 1);
		l++;
	}
	va_end (args);
	return (0);
}
