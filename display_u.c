


#include "lib_ft_printf.h"

void	display_u(unsigned int nb, t_printf *tab)
{
	char	*new;
	int		l;

	new = ft_itoa(nb);
	l = ft_strlen(new);
	tab->br += l;
	ft_putstr_fd(new, 1);
}