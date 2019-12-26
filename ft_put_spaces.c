

#include "lib_ft_printf.h"

void	ft_spaces(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		tab->br++;
		total--;
	}
}

void	ft_put_spaces(int nb, size_t l, t_printf *tab)
{
	if (tab->atx == '*')
	{
		ft_spaces(ft_total(l, tab->ali), tab);
		ft_putnbr_fd(nb, 1);
	}
	else if (tab->flags == '-')
	{
		ft_putnbr_fd(nb, 1);
		ft_spaces(ft_total(l, tab->width), tab);
	}
}
