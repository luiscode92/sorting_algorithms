#include "sort.h"
/**
  * shell_sort - shell sort alg
  * @array: array
  * @size: size of array
  */

void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i = 0, j = 0;
    int tmp;

    while (gap < size)
	    gap = gap * 3 + 1;

    gap = ((gap - 1) / 3);
    
    for (; gap > 0 ; gap = ((gap - 1) / 3))
    {
	    for (i = gap; i < size; i++)
	    {
		    tmp = array[i];
		    for (j = i ; j >= gap && array[j - gap] > tmp; j -= gap)
			    array[j] = array[j - gap];
		    array[j] = tmp;
	    }

	    print_array(array, size);
    }
}

/**
  *swap - swaps two elements
  *@a: first element
  *@b: second elelemnt
  *@arr: array
  *@size: size of array
  */
void swap(int *a, int *b, size_t size, int *ar)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	print_array(ar, size);
}
