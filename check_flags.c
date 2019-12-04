

#include "lib_ft_printf.h"

int		check_flags(const char *s, ...)
{
	int i;
	t_list args;

	args.fd = 1;
	args.s = (char*)s;
	va_start (args.ap, s);

	if (*s == 'd')
	{
		i = va_arg(args.ap, int);
		return (i);
	}
	va_end(args.ap);
}