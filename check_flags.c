/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/05 15:28:01 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	check_flags(const char *s, ...)
{
	static int	d;
	static char c;
	va_list		args;

	va_start(args, s);
	if (*s == 'd')
	{
		d = va_arg(args, int);
		va_end(args);
	}
	else if (*s == 'c')
	{
		c = va_arg(args, int);
		va_end(args);
	}
}
