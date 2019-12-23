

#include "lib_ft_printf.h"

int		ft_punt(const char *s, t_printf *tab)
{
	if (s[tab->len] == '.')
	{
		tab->len++;
		return ('.');
	}
	return (0);
}