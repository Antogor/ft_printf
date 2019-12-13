/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 11:12:06 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/13 12:12:23 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	convert_hexa(int nb)
{
	int tmp;
	int l;
	int q;
	char *hexanum;

	l = 0;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
		{
			hexanum[l] = (char) (48 + tmp);
			l++;
		}
		else if (tmp > 10)
		{
			hexanum[l] = (char) (55 + tmp);
			l++;
		}
		l++;
		nb = nb / 16;
	}
	q = l;
	while ()
	{
		/* code */
	}
	
}
