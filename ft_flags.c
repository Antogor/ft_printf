


#include "lib_ft_printf.h"

int		ft_flags(const char *s, t_printf *tab)
{
	if (s[tab->len] == '-' && s[tab->len + 1] != '0')
	{
		tab->len++;
		return ('-');
	}
	else if (s[tab->len] == '0' && s[tab->len + 1] != '-')
	{
		tab->len++;
		return ('0');
	}
	else if (s[tab->len] == '-' && s[tab->len + 1] == '0' 
			|| s[tab->len] == '0' && s[tab->len + 1] == '-')
			return (-1);
	return (0);
}