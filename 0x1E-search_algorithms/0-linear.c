#include <stdio.h>

/*
 * linear_search - search for an element in an array using
 * linear search algorithm
 * @arr: pointer to the array to be search
 * @size: Size of the array
 * @value: Value to search for
 * Return: Return index of the value if found, else
 * return -1
 */

int linear_search(int *arr, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (!arr)
			return (-1);

		if (arr[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
		}
	}
	return (-1);
}
