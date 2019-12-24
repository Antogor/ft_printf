

#include "lib_ft_printf.h"

void	ft_put_spaces(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		tab->br++;
		total--;
	}
}