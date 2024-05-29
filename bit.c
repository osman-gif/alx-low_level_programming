#include <stdio.h>


int displaymask(int value)
{
	unsigned int mask = 1<<7;

	printf("%5u = ", value);
	for (unsigned int i = 0; i < 8; ++i)
	{
		putchar(value & mask? '1':'0');
		value<<=1;
	}
	putchar('\n');
	return value;
}

int main(void)
{
	int value = 7;
	unsigned int mask = 1;
	displaymask(value);
	displaymask(mask);
	displaymask(102 & 34);
	return value;
}
