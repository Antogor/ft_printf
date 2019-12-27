


#include "lib_ft_printf.h"

size_t	ft_strlen_print_f(const char *s, int l)
{
	size_t q;

	q = 0;
	while (s[l] >= '0' && s[l] <= '9')
	{
		q++;
		l++;
	}
	return (q);
}

int		ft_width(const char *s, t_printf *tab, int flags)
{
	char	*substr;
	size_t	q;

	if (flags == '-' || flags == '0' || flags == 1)
	{
		if (s[tab->len] >= '1' && s[tab->len] <= '9')
		{
			substr = ft_substr(s, tab->len, (q = ft_strlen_print_f(s, tab->len)));
			tab->width = ft_atoi(substr);
			free(substr);
			substr = NULL;
			tab->len += q;
		}
		else if (s[tab->len] == '*')
		{
			tab->width = va_arg(tab->args, int);
			tab->len++;
		}
	}
	return (tab->width);
}
