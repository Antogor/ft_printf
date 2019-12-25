


#include "lib_ft_printf.h"

void	display_u(unsigned int nb, t_printf *tab)
{
	char	*new;
	size_t	l;
	int		total;

	new = ft_itoi(nb);
	l = ft_strlen(new);
	tab->br += l;
	if (tab->flags == '-' && tab->width > (int)l)
	{
		total = ft_total(l, tab->width);
		ft_putstr_fd(new, 1);
		ft_put_spaces(total, tab);
	}
	else if (tab->flags == '0' && tab->width > (int)l)
	{
		total = ft_total(l, tab->width);
		ft_putzeros_char(total, tab);
		ft_putstr_fd(new, 1);
	}
	else
	ft_putstr_fd(new, 1);
}