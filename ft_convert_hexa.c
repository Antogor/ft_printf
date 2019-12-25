/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 11:12:06 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 11:01:40 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		count_hexa(int nb, t_printf *tab)
{
	int n;
	int len;

	n = nb;
	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char	*ft_convert_hexa(int nb, t_printf *tab)
{
	int		tmp;
	int		l;
	char	*hexanum;

	l = count_hexa(nb, tab);
	hexanum = malloc(sizeof(char) * l);
	hexanum[l--] = '\0';
	if (nb == 0)
		hexanum[l--] = 48;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
			hexanum[l--] = (char)(48 + tmp);
		else if (tmp >= 10)
			hexanum[l--] = (char)(55 + tmp);
		nb = nb / 16;
	}
	return (hexanum);
}
