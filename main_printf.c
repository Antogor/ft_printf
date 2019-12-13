#include "lib_ft_printf.h"
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	int x = 8543435;
	char c = 'a';
	char g[] = "que pasa";
	long int f;
	long int remainder;
	char hexadecimalnum[100];
	int j = 0;
	int i = 0;
	/*int *p = &x;
	char *p2 = &c;

	ft_printf("MI PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s\n", x, c, g);
	printf("PRINTF: INT = %d, CHAR = %c, PORCENTAJE %%, STRING = %s, DMEMORY = %p\n", x, c, g, p);
	printf("PRUEBAS DE FLAGS P = %p\n", p2);*/

	printf("%s", convert_hexa(x));
	//printf("%d", f);
	return (0);
}