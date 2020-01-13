


#include "lib_ft_printf.h"

void	display_0(t_printf *tab)
{
	if (tab->flags == 1 || tab->flags == '-')
		ft_put_spaces(tab->width, tab);
}