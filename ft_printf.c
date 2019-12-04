

#include "lib_ft_printf.h"

int		ft_printf(const char *s, ...)
{
	int d;

	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			d = check_flags(s);
		}
		else
			write(1, &s, 1);
		s++;
	}
	return (d);
}