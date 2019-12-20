
#include "lib_ft_printf.h"

void	display_c(int c, int spaces, char f)
{
	int l;
	int total;

	l = 1;
	total = spaces - l;
	ft_putchar_fd(c, 1);
	if (f == '-')
	{
		while (total > 0)
		{
			ft_putchar_fd(' ', 1);
			total--;
		}
	}
}
