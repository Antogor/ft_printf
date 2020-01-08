#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = -1120;
	int g = -3;
	char c = 'a';
	char *s = "hola";
	int f;
	int j;
	f = ft_printf("%.20Xhola\n", x);
	j = printf("%.20xhola\n", x);
	printf("MIO: %d, ORIGINAL: %d\n", f,j);
	return (0);
}