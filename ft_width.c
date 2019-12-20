


#include "lib_ft_printf.h"

size_t	ft_strlen_print(const char *s)
{
	size_t q;

	q = 0;
	while (*s >= 48 && *s <= 57)
	{
		q++;
		s++;
	}
	return (q);
}

int		ft_width(const char *s, t_printf *tab, int flags)
{
	char *substr;
	int q;

	if (flags == '-' || flags == '0')
	{
		tab->len++;
		if (s[tab->len] >= '1' && s[tab->len] <= '9')
		{
			substr = ft_substr(s, tab->len, (q = ft_strlen_print(s)));
			tab->width = ft_atoi(substr);
			free(substr);
			substr = NULL;
			tab->len += q;
		}
	}
	return (tab->width);
}