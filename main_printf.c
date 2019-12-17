#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = -534343;
	char c = 'a';
	char g[] = "que pasa";
	char *p = &c;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i, U = %u\n", x, c, g, x, x, x, x);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i, U = %u\n", x, c, g, x, x, x, x);
	printf("PRUEBAS DE FLAGS DMEMORY = %p", p);
	
	return (0);
}