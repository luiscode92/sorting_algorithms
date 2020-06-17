#include "sort.h"

/**
 * selection_sort - sort integers using the selection sort alg
 * @array: the array of integer
 * @size: numebr of elements
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int current_min, temp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		current_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[current_min])
				current_min = j;
		}

		if (array[i] != array[current_min])
		{
			temp = array[i];
			array[i] = array[current_min];
			array[current_min] = temp;
			print_array(array, size);
		}
	}
}