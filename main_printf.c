#include "lib_ft_printf.h"
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	int x = 5.45;
	char c = 'a';
	char g[] = "que pasa";
	char *p = &c;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i\n", x, c, g, x, x, x);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, HEXAM = %X, HEXAm = %x, DECIMAL = %i\n", x, c, g, x, x, x);
	printf("PRUEBAS DE FLAGS DMEMORY = %p, u = %05.1fdhola", p, x);
	
	return (0);
}