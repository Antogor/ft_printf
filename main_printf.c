#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = -120;
	int g = -3;
	char c = 'a';
	char *s = "hola";
	int f;
	int j;
	f = ft_printf("%  d\n", x);
	j = printf("%  d\n", x);
	printf("MIO: %d, ORIGINAL: %d\n", f,j);
	return (0);
}