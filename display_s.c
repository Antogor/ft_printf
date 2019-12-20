
#include "lib_ft_printf.h"

void	put_spaces(char *s, size_t l, int spaces)
{
	int total;

	if ((int)l < spaces)
		total = spaces - l;
	else
		total = l - spaces;
	if (spaces > (int)l)
	{
		while (total > 0)
		{
			ft_putchar_fd(' ', 1);
			total--;
		}
	}
}

void	display_s(char *s, int spaces, char f, int precision, char punt)
{
	char *str;
	size_t l;

	if(punt == '.')
	{
		str = ft_substr(s, 0, precision);
		ft_putstr_fd(str, 1);
		if(f == '-')
		{
			l = ft_strlen(str);
			put_spaces(str, l, spaces);
		}
		free(str);
		str = NULL;
	}
	else
	{
		ft_putstr_fd(s, 1);
		if(f == '-')
		{
			l = ft_strlen(s);
			put_spaces(s, l, spaces);
		}
	}
}