/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/19 16:41:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

size_t		ft_strlen_print(const char *s, int l)
{
	size_t q;

	q = 0;
	while (s[l] >= 48 && s[l] <= 57)
	{
		q++;
		l++;
	}
	return (q);
}

char	check_flags(va_list args)
{
	char flags;

	
	return (flags);
}
/*{
	char *substr;
	size_t q;

	if (s[l] == '-' || s[l] == '0')
	{
		if (s[l] == '-')
			flags->f = '-';
		else
			flags->f = '0';
		l++;
		substr = ft_substr(s, l, (q = ft_strlen_print(s, l)));
		flags->spaces = ft_atoi(substr);
		free(substr);
		substr == NULL;
		l += q;
	}
	if (s[l] == '.')
	{
		flags->punt = '.';
		l++;
		substr = ft_substr(s, l, (q = ft_strlen_print(s, l)));
		flags->precision = ft_atoi(substr);
		free(substr);
		substr == NULL;
		l += q;
	}
	return (l);
}*/
