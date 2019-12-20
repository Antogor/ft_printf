/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 10:34:29 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

size_t		ft_strlen_print(const char *s)
{
	size_t q;

	q = 0;
	while (*s >= 48 && *s <= 57)
	{
		q++;
		s++;
	}
	return (q);
}

char	check_flags(const char *s)
{
	char flags;
	int q;
	int spaces;
	int precision;
	char *substr;
	s++;
	while ((*s == '-' || *s == '0') && *s == '.')
	{
		if (*s == '-' || *s == '0')
		{
			if (*s == '-')
				substr = ft_substr(s, 0, (q = ft_strlen_print(s)));
			else
				substr = ft_substr(s, 0, (q = ft_strlen_print(s)));
			s++;
			spaces = ft_atoi(substr);
			printf("%s\n", substr);
			printf("%d\n", spaces);
			free(substr);
			substr = NULL;
			s += q;
			printf("%c\n", *s);
		}
		if (*s == '.')
		{
			s++;
			substr = ft_substr(s, 0, (q = ft_strlen_print(s)));
			precision = ft_atoi(substr);
			free(substr);
			substr = NULL;
		}
	}
	return (*s);
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
