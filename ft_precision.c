


#include "lib_ft_printf.h"

size_t	ft_strlen_print_p(const char *s, int l)
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

int		ft_precision(const char *s, t_printf *tab)
{
	char	*substr;
	size_t	q;

	if (tab->punt == '.')
	{
		if (s[tab->len] >= '1' && s[tab->len] <= '9')
		{
			substr = ft_substr(s, tab->len, (q = ft_strlen_print_p(s, tab->len)));
			tab->precision = ft_atoi(substr);
			free(substr);
			substr = NULL;
			tab->len += q;
		}
		else if (s[tab->len] == '*')
		{
			tab->precision = va_arg(tab->args, int);
			tab->len++;
		}
	}
	return (tab->precision);
}
