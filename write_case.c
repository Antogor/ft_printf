
#include "lib_ft_printf.h"

void	write_case(const char *s, int l, t_print *type)
{
	if (s[l] == 'd' || s[l] == 'i')
		display_d(type->d = va_arg(type->flags, int), type->spaces, type->f);
	else if (s[l] == 'c')
	{
		type->c = va_arg(type->flags, int);
		ft_putchar_fd(type->c, 1);
	}
	else if (s[l] == 's')
	{
		type->s = va_arg(type->flags, char *);
		ft_putstr_fd(type->s, 1);
	}
	else if (s[l] == 'X' || s[l] == 'x')
	{
		type->h = va_arg(type->flags, int);
		convert_hexa(type->h, s[l]);
	}
}
