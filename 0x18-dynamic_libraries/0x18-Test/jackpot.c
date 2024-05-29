#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int ran[6], i;

	if (argc < 7)
	{
		printf("Usage: ./gm n1 n2 n3 n4 n5 bunos\n");
		return (0);
	}

	printf("argc: %d\n", argc);
	for (i = 0; i < 6; i++)
	{
		ran[i] = (rand() % (75)) + 1;
		printf("rand[%d]: %d\n", i, ran[i]);
	}

	return (0);
}
