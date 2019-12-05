/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:53:36 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/05 15:32:07 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_printf(const char *s, ...)
{
	static int	d;
	static char c;

	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			check_flags(&(*s));
			write_flags(&(*s));
		}
		else
			ft_putchar_fd(*s, 1);
		s++;
	}
	return (1);
}
