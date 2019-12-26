

#include "lib_ft_printf.h"

void	ft_zeros_char(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		tab->br++;
		total--;
	}
}

void	ft_putzeros_char(char *s, size_t l, t_printf *tab)
{
	ft_zeros_char(ft_total(l, tab->width), tab);
	ft_putstr_fd(s, 1);
}