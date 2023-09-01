#include <stdio.h>

/**
 * main - prints number of command line arguments
 * @argc: number of commandline arguments
 * @argv: The commandline arguments
 * Return: always return 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
