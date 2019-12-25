

#include "lib_ft_printf.h"

void	ft_comp(char *hexanum, t_printf *tab, size_t l)
{
	int total;

	if (tab->flags == '-' && tab->width > (int)l)
	{
		total = ft_total(l, tab->width);
		ft_putstr_fd(hexanum, 1);
		ft_put_spaces(total, tab);
	}
	else if (tab->flags == '0' && tab->width > (int)l)
	{
		total = ft_total(l, tab->width);
		ft_putzeros_char(total, tab);
		ft_putstr_fd(hexanum, 1);
	}
	else
		ft_putstr_fd(hexanum, 1);
}

void	put_lower(char *s, size_t l)
{
	while ((int)l >= 0)
	{
		if (s[l] >= 65 && s[l] <= 90)
			s[l] = ft_tolower(s[l]);
		l--;
	}
}

void	display_hexa(int h, t_printf *tab)
{
	char	*hexanum;
	size_t	l;

	if (h >= 0)
	{
		hexanum = ft_convert_hexa(h, tab);
		l = ft_strlen(hexanum);
		tab->br += l;
		if (tab->type == 'x')
			put_lower(hexanum, l);
		ft_comp(hexanum, tab, l);
	}
	else
	{
	}
	free(hexanum);
	hexanum = NULL;
}