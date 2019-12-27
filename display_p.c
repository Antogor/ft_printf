

#include "lib_ft_printf.h"

void	display_p(long int p, t_printf *tab)
{
	char	*memory;
	size_t	l;

	memory = ft_convert_memory(p, tab);
	l = ft_strlen(memory);
	tab->br += l;
	if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces_char(memory, l, tab);
	else if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces_char(memory, l, tab);
	else
		ft_putstr_fd(memory, 1);
	free(memory);
	memory = NULL;
}