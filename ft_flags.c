/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:44:04 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 12:05:13 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_flags(const char *s, t_printf *tab)
{
	if (s[tab->len] == '-' && s[tab->len + 1] != '0')
	{
		tab->len++;
		return ('-');
	}
	else if (s[tab->len] == '0' && s[tab->len + 1] != '-')
	{
		tab->len++;
		return ('0');
	}
	else if ((s[tab->len] >= '1' && s[tab->len] <= '9') || s[tab->len] == '*')
		return (1);
	return (0);
}
