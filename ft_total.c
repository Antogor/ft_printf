

#include "lib_ft_printf.h"

int		ft_total(size_t l, int tam)
{
	int total;

	if ((int)l < tam)
		total = tam - l;
	else
		total = l - tam;
	return (total);
}
	