


#include "lib_ft_printf.h"

int		ft_atx(const char *s, t_printf *tab)
{	
	tab->ali = 0;
	if (s[tab->len] == '*')
	{
		tab->len++;
		tab->ali = va_arg(tab->args, int);
		return ('*');
	}
	return (0);
}