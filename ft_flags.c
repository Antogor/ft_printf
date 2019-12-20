


#include "lib_ft_printf.h"

int		ft_flags(const char *s, t_printf *tab)
{
	if (s[tab->len] == '-')
	{
		tab->len++;
		return ('-');
	}
	else if (s[tab->len] == '0')
	{
		tab->len++;
		return ('0');
	}
	else if (s[tab->len] == '.')
	{
		tab->len++;
		return ('.');
	}
	return (0);
}