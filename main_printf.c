#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = 0;
	int g = -3;
	char c = 'a';
	char *s = "";
	int f;
	int j;
	f = ft_printf("%xhola\n", x);
	j = printf("%xhola\n", x);
	printf("MIO: %d, ORIGINAL: %d\n", f,j);
	write(1, NULL, 1);
	return (0);
}