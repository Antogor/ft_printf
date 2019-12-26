

#include "lib_ft_printf.h"

void	ft_zeros(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		tab->br++;
		total--;
	}
}

void	ft_putzeros(int d, size_t l, t_printf *tab)
{
	if (d < 0)
	{
		d *= -1;
		ft_putchar_fd('-', 1);
		ft_zeros(ft_total(l, tab->width), tab);
		ft_putnbr_fd(d, 1);
	}
	else
	{
		ft_zeros(ft_total(l, tab->width), tab);
		ft_putnbr_fd(d, 1);
	}
}