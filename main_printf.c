#include "lib_ft_printf.h"
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	int x = 54534;
	char c = 'a';
	char g[] = "que pasa";
	int *p = &x;
	char *p2 = &c;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXA = %X\n", x, c, g, x);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, DMEMORY = %p, HEXA = %X\n", x, c, g, p, x);
	printf("PRUEBAS DE FLAGS P = %p\n", p2);

	//convert_hexa(x);
	//printf("%d", f);
	return (0);
}