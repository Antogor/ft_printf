

#include "lib_ft_printf.h"

void	ft_putzeros_char(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd('0', 1);
		total--;
		tab->br++;
	}
}