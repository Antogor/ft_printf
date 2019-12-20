/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:05:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 11:09:54 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	write_case(const char *s, int l, t_printf *type)
{
	if (s[l] == 'd' || s[l] == 'i')
		display_d(type->d = va_arg(type->flags, int), type->spaces, type->f);
	else if (s[l] == 'c')
		display_c(type->c = va_arg(type->flags, int), type->spaces, type->f);
	else if (s[l] == 's')
		display_s(type->s = va_arg(type->flags, char *), type->spaces, type->f,
				type->precision, type->punt);
	else if (s[l] == 'X' || s[l] == 'x')
	{
		type->h = va_arg(type->flags, int);
		convert_hexa(type->h = va_arg(type->flags, int), s[l],
		type->spaces, type->f);
	}
}
