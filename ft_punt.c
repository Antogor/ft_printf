/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:46:13 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 10:46:24 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_punt(const char *s, t_printf *tab)
{
	if (s[tab->len] == '.')
	{
		tab->len++;
		return ('.');
	}
	return (0);
}
