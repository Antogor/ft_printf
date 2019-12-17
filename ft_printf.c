/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:53:36 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/17 16:35:13 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_printf(const char *s, ...)
{
	//va_list args;
	t_print	type;
	int		l;

	va_start(type.args, s);
	l = 0;
	while (s[l] != '\0')
	{
		if (s[l] == '%')
		{
			l++;
			if (s[l] == '%')
				ft_putchar_fd('%', 1);
			else
				check_flags(s, l, &type);
		}
		else
			ft_putchar_fd(s[l], 1);
		l++;
	}
	va_end(type.args);
	return (0);
}
