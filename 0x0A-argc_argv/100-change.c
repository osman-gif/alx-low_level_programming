#include <stdio.h>
#include <stdlib.h>

/**
 * main - Progrma to print minimum number of coins to make
 * change for an amount of money
 * @argc: number of commandline arguments
 * @argv: The commandline argumnents
 * Return: 0 if no command line argument pass, 1 if more than
 * one argument is passed -1 if argument passed is negative
 */
int main(int argc, char **argv)
{
	int amount, i, result, reminder;
	int change[5] = {25, 10, 5, 2, 1};

	amount = atoi(argv[argc - 1]);
	result = 0;
	reminder = amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (reminder == 0)
			break;
		if (reminder >= change[i])
		{
			result += reminder / change[i];
			reminder = reminder % change[i];
		}

	}
	printf("%d\n", result);
	return (0);
}
