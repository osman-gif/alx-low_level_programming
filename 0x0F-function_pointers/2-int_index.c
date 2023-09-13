#include "function_pointers.h"
/**
 * int_index - searches for and integer according to the
 * pointer function passed
 * @array: array of elements to search through
 * @size: size of the array
 * @cmp: pointer to a function that will do the
 * comparison
 * Return: Return the index of the first element the pointer
 * function is searching for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
