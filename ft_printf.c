/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:53:36 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 12:13:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_printf(const char *s, ...)
{
	int			br;
	int			err;
	t_printf	*tab;

	if (!(tab = (t_printf*)malloc(sizeof(t_printf))))
		return (-1);
	va_start(tab->args, s);
	tab->len = 0;
	br = 0;
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
			err = check_flags(s, tab);
			if (err == -1)
				return (-1);
		}
		tab->len++;
	}
	br += tab->br;
	free(tab);
	tab = NULL;
	va_end(tab->args);
	return (br);
}
