#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending ordet usin the
 * selection sort algorithm
 * @array: given array of integers to be sorted
 * @size: size of given array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		int temp = array[i];

		k = i;
		for (j = i + 1; j < size; j = i < size - 1 ? j + 1 : i)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
