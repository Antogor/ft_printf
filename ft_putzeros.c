

#include "lib_ft_printf.h"

void	ft_putzeros(int d, int total, t_printf *tab)
{
	if (d < 0)
	{
		d *= -1;
		ft_putchar_fd('-', 1);
		while (total > 0)
		{
			ft_putchar_fd('0', 1);
			total--;
			tab->br++;
		}
		ft_putnbr_fd(d, 1);
	}
	else
	{
		while (total > 0)
		{
			ft_putchar_fd('0', 1);
			total--;
			tab->br++;
		}
		ft_putnbr_fd(d, 1);
	}
}