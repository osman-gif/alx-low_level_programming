#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: pointer to the command line arguments
 * Return: always return 0
 */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	int i;
	int res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		char *ptr;

		strtol(argv[i], &ptr, 10);

		if (*ptr == '\0')
		{
			if (atoi(argv[i]) >= 0)
			{
				res += atoi(argv[i]);
			}
			else
				return (1);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
