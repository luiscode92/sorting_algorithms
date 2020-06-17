#include "sort.h"
/**
  * quick_sort - quick sort algor
  * @array: integer array6
  * @size: size_t
  */

void quick_sort(int *array, size_t size)
{
	int limit = size - 1;

	if (size < 2)
		return;

	partition(array, size, 0, limit);
}

/**
  * partition - quick sort recursive
  * @ar: array
  * @size: size of array
  * @l_lim: lower limit
  * @h_lim: upper limit
 */
void partition(int *ar, size_t size, int l_lim, int h_lim)
{
	int pivot;

	if (l_lim < h_lim)
	{
		pivot = sort(ar, size, l_lim, h_lim);
		partition(ar, size, l_lim, pivot - 1);
		partition(ar, size, pivot + 1, h_lim);
	}
}

/**
  * sort - sort and array using quick sort alg
  * @ar: array
  * @l_lim: lower limit
  * @h_lim: hight limmit
  * @size: size of the array
  * Return: swap_index
  */
int sort(int *ar, size_t size, int l_lim, int h_lim)
{
	int pivot = ar[h_lim], swap_index = l_lim, i;

	for (i = l_lim ; i < h_lim ; i++)
	{
		if (ar[i] < pivot)
		{
			if (i != swap_index && ar[i] != ar[swap_index])
				swap(&ar[i], &ar[swap_index], size, ar);

			swap_index++;
		}
	}

	if (h_lim != swap_index && ar[h_lim] != ar[swap_index])
		swap(&ar[h_lim], &ar[swap_index], size, ar);

	return (swap_index);
}

/**
  *swap - swap two elements
  *@a: first element
  *@b: second element
  *@ar: array
  *@size: size
  */

void swap(int *a, int *b, size_t size, int *ar)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	print_array(ar, size);
}
