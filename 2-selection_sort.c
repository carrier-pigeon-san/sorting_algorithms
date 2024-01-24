#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending ordet usin the
 * selection sort algorithm
 * @array: given array of integers to be sorted
 * @size: size of given array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j = i < size - 1 ? j + 1 : i)
		{
			int temp = array[i];

			if (array[j] < array[i])
			{
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			/*
			 * j = i < size - 1 ? j + 1 : i;
			 */
		}
	}
}
