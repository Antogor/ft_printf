#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = 6;
	int g = -24;
	char c = 'a';
	char *s = "hola";
	int f;
	int j;
	f = ft_printf("%-5.5sque\n", s);
	j = printf("%-5.5sque\n", s);

	printf("MIO: %d, ORIGINAL: %d\n", f,j);
/*	int u = 20;
	char c = 'a';
	char g[] = "que pasa";
	char *p = &c;
	int o;
*/
	
/*
	ft_printf("MI PRINTF: INT = %09dprueba, CHAR = %-3cprueba, PORCENTAJE %%, STRING = %-10.3shola, HEXAM = %X, HEXAm = %x, DECIMAL = %i\n", x, c, g, x, x, x);
	o = printf("PRINTF: INT = %d, CHAR = %-3cprueba, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i, U = %u\n", x, c, g, x, x, x, u);
	o = printf("%d", x);
	printf("%d\n", o);
*/
	return (0);
}