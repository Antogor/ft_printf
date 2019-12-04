

#include "lib_ft_printf.h"

int	check_flags(const char *s, ...)
{
	static int d;
	static char c;
	va_list args;
	va_start (args, s);

	if (*s == 'd')
	{
		d = va_arg(args, int);
		va_end(args);
		return (d);
	}
	else if (*s == 'c')
	{
		c = va_arg(args, int);
		va_end(args);
		return (c);
	}
}