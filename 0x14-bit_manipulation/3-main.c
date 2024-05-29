#include "main.h"
#include <stdio.h>

int main(void)
{
	unsigned long int n;
	int r;

	r = 0;

	n = 1024;
	r = set_bit(&n, 64);
	printf("%lu -- r: %d\n", n, r);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
