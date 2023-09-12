#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: first value of the array
 * @max: last value of the array
 * Return: Returns a pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min < 0)
		return (NULL);

	if (max <= 0)
		return (NULL);

	if (min > max)
		return (NULL);
	if (max == min)
	{
		ptr = malloc(max * sizeof(int));
		ptr[0] = max;
		return (ptr);
	}
	if (max == 0 && min == 0)
	{
		ptr = malloc(sizeof(int));
		ptr[0] = 0;
		return (ptr);
	}


	ptr = malloc((max) * (sizeof(int) + 1));

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i++] = min++;
	}
	/*ptr[i] = max;*/


	return (ptr);
}
