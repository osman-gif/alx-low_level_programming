#include <stdio.h>

size_t binary_search(int *arr, size_t size, int value)
{
	size_t begin, end;
	int mid, tmp_end, tmp_beg;
	size_t i;

	begin = 0;
	end = (int)size - 1;

	for  (i = 0; i < size; i++)
	{
		mid = (end + begin)/ 2;
		printf("Searching in array: ");
		
		tmp_end = end;
		tmp_beg = begin;
		
		for (;(tmp_beg - 1) < tmp_end;)
		{
			tmp_beg++;
			if (tmp_beg < tmp_end)
				printf("%d, ", arr[tmp_beg]);
			else
				printf("%d\n", arr[tmp_end]);
		}
		if (value < arr[mid])
		{
			end = mid - 1;
		}
		else if (value > arr[mid]){
			begin = mid + 1;
		}
		else if (value == arr[mid]){
			return (i);
		}
	}
	printf("Not found\n");
	return (-1);
}
