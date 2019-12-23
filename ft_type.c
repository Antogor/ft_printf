


#include "lib_ft_printf.h"

char		ft_type(const char *s, t_printf *tab)
{
	if (s[tab->len] == 'd' || s[tab->len] == 'i')
		return (s[tab->len]);
	else if (s[tab->len] == 'c')
		return (s[tab->len]);
	else if (s[tab->len] == 's')
		return (s[tab->len]);
	/*	display_s(type->s = va_arg(type->flags, char *), type->spaces, type->f,
				type->precision, type->punt);
	else if (s[tab->len] == 'X' || s[tab->len] == 'x')
	{
		type->h = va_arg(type->flags, int);
		convert_hexa(type->h = va_arg(type->flags, int), s[l],
		type->spaces, type->f);
	}*/
}