#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = 4;
	int g = -3;
	char c = 'a';
	char *s = "hola";
	int f;
	int j;
	f = ft_printf("00000000000000\n");
	j = printf("%10.10dhola\n", x);
	printf("MIO: %d, ORIGINAL: %d\n", f,j);
	return (0);
}