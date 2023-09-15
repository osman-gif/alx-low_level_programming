#include "3-calc.h"

/**
 * main - Test function and recieves cmd arguments
 * @argc: Number of the cmd arguments
 * @argv: The cmd arguments
 * Return: Returns 0
 */
int main(int argc, char **argv)
{
	int (*fp)(int, int);
	int num1, num2, result;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fp = get_op_func(argv[2]);
	result = fp(num1, num2);
	printf("%d\n", result);

	return (0);
}
