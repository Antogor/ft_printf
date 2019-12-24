

#include "lib_ft_printf.h"

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

	if (h >= 0)
	{
		hexanum = ft_convert_hexa(h, tab);
		if (tab->type == 'x')
			put_lower(hexanum, ft_strlen(hexanum));
		ft_putstr_fd(hexanum, 1);
	}
	else
	{
	}
	free(hexanum);
	hexanum = NULL;
}