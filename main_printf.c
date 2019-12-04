#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x;
	int a;
	char c;
	char g[] = "que pasa\n";

	x = 8;
	a = 10;
	c = 'a';
	ft_printf("Hola\n%d\nadios\n%d\n%c\n%s\n", x, a, c, g);
	printf("Hola\n%x\nadios\n%d\n%c\n%s\n", x, a, c, g);
	return (0);
}