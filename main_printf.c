#include "lib_ft_printf.h"
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	int x = 34223;
	char c = 'a';
	char g[] = "que pasa";
	int *p = &x;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x\n", x, c, g, x, x);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, DMEMORY = %p, HEXAM = %X, HEXAm = %x\n", x, c, g, p, x, x);
	printf("PRUEBAS DE FLAGS P = %p\n", p);
	
	return (0);
}