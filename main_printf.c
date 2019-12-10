#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = 8;
	char c = 'a';
	char g[] = "que pasa";
	int *p = &x;
	char *p2 = &c;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s\n", x, c, g);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, DMEMORY = %p\n", x, c, g, p);
	printf("PRUEBAS DE FLAGS P = %p\n", p2);
	return (0);
}