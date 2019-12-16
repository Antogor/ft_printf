#include "lib_ft_printf.h"
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	unsigned int x = -5243;
	char c = 'a';
	char g[] = "que pasa";
	char *p = &c;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i\n", x, c, g, x, x, x);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i\n", x, c, g, x, x, x);
	printf("PRUEBAS DE FLAGS DMEMORY = %p, u = %-10shola", p, g);
	
	return (0);
}