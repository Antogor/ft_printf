

#include "lib_ft_printf.h"

int		count_memory(long int nb, t_printf *tab)
{
	long int	n;
	int			len;

	n = nb;
	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char	*ft_convert_memory(long int nb, t_printf *tab)
{
	long int	tmp;
	char		*memory;
	int			l;

	l = count_memory(nb, tab) + 2;
	memory = malloc(sizeof(char) * l);
	memory[0] = '0';
	memory[1] = 'x';
	memory[l--] = '\0';
	if (nb == 0)
		memory[l--] = 48;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
			memory[l--] = (char)(48 + tmp);
		else if (tmp >= 10)
			memory[l--] = (char)(87 + tmp);
		nb = nb / 16;
	}
	return (memory);
}
