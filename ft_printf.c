/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:53:36 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 11:08:29 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_printf(const char *s, ...)
{
	int			br;
	char		f;
	t_printf	*tab;

	if (!(tab = (t_printf*)malloc(sizeof(t_printf))))
		return (-1);
	tab->format = s;
	va_start(tab->args, s);
	while (*s != '\0')
	{
		if (*s != '%')
			br += write(1, &s, 1);
		else
		{
			f = check_flags(s);
			br += write_case(tab->args);
		}
		s++;
	}
	free(tab);
	tab = NULL;
	va_end(tab->args);
	return (br);
}
/*
**	int		l;
**
**	va_start(type.flags, s);
**	l = 0;
**	while (s[l] != '\0')
**	{
**	if (s[l] == '%')
**	{
**	l++;
**	if (s[l] == '%')
**	ft_putchar_fd('%', 1);
**	else
**	{
**	check_flags(s, l, type.flags);
**	l = check_flags(s, l, &type);
**	write_case(s, l, &type);
**	}
**	}
**	else
**	ft_putchar_fd(s[l], 1);
**	l++;
**	}
**	va_end(type.flags);
**	return (0);
**	}
*/
