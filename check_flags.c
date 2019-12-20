/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:10 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 12:14:14 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

size_t	ft_strlen_print(const char *s)
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

char	check_flags(const char *s, t_printf *tab)
{
	int			q;
	char		*substr;
	int			l;

	l = 1;
	while ((s[l] == '-' || s[l] == '0') || s[l] == '.')
	{
		if (s[l] == '-' || s[l] == '0')
		{
			if (s[l] == '-')
			{
				l++;
				substr = ft_substr(s, l, (q = ft_strlen_print(&s[l])));
				tab->br = q;
			}
			else
			{
				l++;
				substr = ft_substr(s, l, (q = ft_strlen_print(&s[l])));
				tab->br = q;
			}
			tab->spaces = ft_atoi(substr);
			free(substr);
			substr = NULL;
			//l += q;
		}
		if (s[l] == '.')
		{
			l++;
			substr = ft_substr(s, 0, (q = ft_strlen_print(s)));
			tab->precision = ft_atoi(substr);
			tab->br = q;
			free(substr);
			substr = NULL;
		}
		l++;
	}
	return (s[l]);
}

/*
**	{
**	char *substr;
**	size_t q;
**
**	if (s[l] == '-' || s[l] == '0')
**	{
**	if (s[l] == '-')
**	flags->f = '-';
**	else
**	flags->f = '0';
**	l++;
**	substr = ft_substr(s, l, (q = ft_strlen_print(s, l)));
**	flags->spaces = ft_atoi(substr);
**	free(substr);
**	substr == NULL;
**	l += q;
**	}
**	if (s[l] == '.')
**	{
**	flags->punt = '.';
**	l++;
**	substr = ft_substr(s, l, (q = ft_strlen_print(s, l)));
**	flags->precision = ft_atoi(substr);
**	free(substr);
**	substr == NULL;
**	l += q;
**	}
**	return (l);
**	}
*/
