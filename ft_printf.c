/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:02:10 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 12:17:35 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		check_error(const char *s)
{
	int l;
	
	l = 0;
	while (s[l] != '\0')
	{
		if (s[l] == '%')
		{
			l++;
			if ((s[l] == '-' && (s[l + 1] == '0' || s[l] == '*')) ||
			(s[l] == '0' && (s[l + 1] == '-' || s[l] == '*')) ||
			(s[l] == '*' && (s[l + 1] == '-' || s[l] == '0')))
				return (-1);
			if (!(s[l] == 'd' || s[l] == 'c' || s[l] == 's' || s[l] == 'p'
			|| s[l] == 'x' || s[l] == 'X' || s[l] == 'i' || s[l] == 'u' ||
			s[l] == '%' || s[l] == ' '|| s[l] == '*' || s[l] == '-' ||
			s[l] == '0' || s[l] == '.'))
				return (-1);
		}
		l++;
	}
	return (0);
}

void	to_printf(const char *s, t_printf *tab)
{
	int err;

	while (s[tab->len] != '\0')
	{
		if (s[tab->len] != '%')
		{
			write(1, &s[tab->len], 1);
			tab->br++;
		}
		else
		{
			tab->len++;
			while (s[tab->len] == ' ')
				tab->len++;
			err = check_flags(s, tab);
		}
		tab->len++;
	}
}

int		ft_printf(const char *s, ...)
{
	int			br;
	t_printf	*tab;

	if (!(tab = (t_printf*)malloc(sizeof(t_printf))))
		return (-1);
	va_start(tab->args, s);
	tab->len = 0;
	tab->br = 0;
	br = check_error(s);
	if (br == -1)
		return (br);
	to_printf(s, tab);
	br += tab->br;
	free(tab);
	tab = NULL;
	va_end(tab->args);
	return (br);
}
