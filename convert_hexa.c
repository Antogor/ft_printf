/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 11:12:06 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/16 12:10:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		count_hexa(int nb)
{
	int n;
	int len;
	n = nb;
	len  = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	put_hexa(char *hexanum, int l)
{
	int q;

	q = l;
	while (q >= 0)
	{
		ft_putchar_fd(hexanum[q], 1);
		q--;
	}
	free(hexanum);
	hexanum = NULL;
}

void	convert_hexa(int nb, char c)
{
	int tmp;
	int l;
	char *hexanum;

	hexanum = malloc(sizeof(char) * (count_hexa(nb) + 1));
	l = 0;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
		{
			hexanum[l] = (char) (48 + tmp);
			l++;
		}
		else if (tmp >= 10)
		{
			if (c == 'X')
			{
				hexanum[l] = (char) (55 + tmp);
				l++;
			}
			else
			{
				hexanum[l] = (char) (87 + tmp);
				l++;
			}
		}
		nb = nb / 16;
	}
	hexanum[l] = '\0';
	put_hexa(hexanum, l);
}
