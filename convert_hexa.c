/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 11:12:06 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/19 13:42:46 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		count_hexa(int nb)
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

void	put_spaces_hex(int q, int total, char *hexanum, char c)
{
	while (q >= 0)
	{
		if (c == 'X')
			ft_putchar_fd(hexanum[q], 1);
		else
		{
			if (hexanum[q] >= 65 && hexanum[q] <= 90)
				hexanum[q] = ft_tolower(hexanum[q]);
			ft_putchar_fd(hexanum[q], 1);
		}
		q--;
	}
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		total--;
	}
}

void	put_zeros_hex(int q, int total, char *hexanum, char c)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		total--;
	}
	while (q >= 0)
	{
		if (c == 'X')
			ft_putchar_fd(hexanum[q], 1);
		else
		{
			if (hexanum[q] >= 65 && hexanum[q] <= 90)
				hexanum[q] = ft_tolower(hexanum[q]);
			ft_putchar_fd(hexanum[q], 1);
		}
		q--;
	}
}

void	put_hexa(char *hexanum, int l, int spaces, char f, char c)
{
	int q;
	size_t len;
	int total;

	len = ft_strlen(hexanum);
	if ((int)len < spaces)
		total = spaces - len;
	else
		total = len - spaces;
	q = l;
	if (f == '-' && spaces > (int)l)
		put_spaces_hex(q, total, hexanum, c);
	else if (f == '0' && spaces > (int)l)
		put_zeros_hex(q, total, hexanum, c);
	else
	{
		while (q >= 0)
		{
			if (c == 'X')
				ft_putchar_fd(hexanum[q], 1);
			else
			{
				if (hexanum[q] >= 'A' && hexanum[q] <= 'Z')
					hexanum[q] = ft_tolower(hexanum[q]);
				ft_putchar_fd(hexanum[q], 1);
			}
			q--;
		}
	}
	free(hexanum);
	hexanum = NULL;
}

void	convert_hexa(int nb, char c, int spaces, char f)
{
	int		tmp;
	int		l;
	char	*hexanum;

	hexanum = malloc(sizeof(char) * (count_hexa(nb) + 1));
	l = 0;
	if (nb == 0)
		hexanum[l++] = 48;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
			hexanum[l++] = (char)(48 + tmp);
		else if (tmp >= 10)
			hexanum[l++] = (char)(55 + tmp);
		nb = nb / 16;
	}
	hexanum[l] = '\0';
	put_hexa(hexanum, l, spaces, f, c);
}
