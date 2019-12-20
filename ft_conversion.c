

#include "lib_ft_printf.h"

int		ft_conversion(t_printf *tab)
{
	if (tab->type == 'd' || tab->type == 'i')
	{
		display_d(tab->d = va_arg(tab->args, int), tab);
		return (tab->len);
	}
}