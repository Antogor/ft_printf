#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = -5;
	int u = 20;
	char c = 'a';
	char g[] = "que pasa";
	char *p = &c;

	ft_printf("MI PRINTF: INT = %09dprueba, CHAR = %-3cprueba, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i\n", x, c, g, x, x, x);
	printf("PRINTF: INT = %d, CHAR = %-3cprueba, PORCENTAJE %%, STRING = %.10s, HEXAM = %X, HEXAm = %x, DECIMAL = %i, U = %u\n", x, c, g, x, x, x, u);
	printf("PRUEBAS: %-10.3shola\n", g);
	
	return (0);
}