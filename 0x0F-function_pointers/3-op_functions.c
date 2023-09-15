#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the diff of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the multiplication of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the result of the division of the two integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Perform modular division on the  two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the result of modular division of the two integers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


