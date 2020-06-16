#include "sort.h"

/**
* bubble_sort - sort integrers using th bubble sort alg
* @array: the array of integers
* @size: the number of elements
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int swap, tmp;

	if (!array)
		return;
	do {
		swap = 0;
		for (i = 0 ; i < size - 1 ; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
	} while (swap);
}
