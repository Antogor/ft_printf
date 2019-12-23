


#include "lib_ft_printf.h"

int		ft_precision(char *s, t_printf *tab)
{
	if (tab->flags == '.')
	{
		substr = ft_substr(s, 0, (q = ft_strlen_print(s)));
		tab->precision = ft_atoi(substr);
		tab->br = q;
		free(substr);
		substr = NULL;
	}
	l++;
	return (s[l]);
}