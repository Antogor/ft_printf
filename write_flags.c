/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:29:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/05 11:45:04 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		a = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
	}
	ft_putchar_fd(a % 10 + 48, fd);
}

void	write_flags(const char *s)
{
	ft_putnbr_fd(*s, 1);
}