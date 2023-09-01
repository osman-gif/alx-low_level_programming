#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Number of arguments passed to the program
 * @argv: Arguments passed to the program
 * Return: Return 0 if success 1 on failure
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	int res, first, second;

	if (argv[1] && argv[2])
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		res = first * second;
		printf("%d\n", res);
	}
	else
		printf("Error\n");
return (0);
}
