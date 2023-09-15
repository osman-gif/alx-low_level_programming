#include "3-calc.h"

/**
 * get_op_func - It select the right function according to the string passed
 * @s: string passed into the function that will determine
 * the function to which the get_op_func will return a pointer to
 * Return: It returns a pointer to a function that will take two ints
 * as parameters and returns an int
 */

int (*get_op_func(char *s))(int x, int y)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);

}

