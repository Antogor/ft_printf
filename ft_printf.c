

#include "lib_ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		a = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
	}
	ft_putchar_fd(a % 10 + 48, fd);
}

int		ft_printf(const char *s, ...)
{
	static int d;
	static char c;
	static int *str;
	va_list args;
	va_start (args, s);

	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'd')
			{
				d = va_arg(args, int);
				va_end(args);
				ft_putnbr_fd(d, 1);
			}
			else if (*s == 'c')
			{
				c = va_arg(args, int);
				va_end(args);
				ft_putchar_fd(c, 1);
			}
		}
		else
			ft_putchar_fd(*s, 1);
		s++;
	}
	return (1);
}