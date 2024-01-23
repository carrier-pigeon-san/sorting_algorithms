# include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the bubble sort algorithm
 * @array: given array of integers to be sorted
 * @size: length of the array
 */
void bubble_sort(int *array, size_t size)
{
	int switched;

	do {
		size_t i, j;

		switched = 0;
		for (i = 0; i < size; i++)
		{
			j = i < size - 1 ? i + 1 : i;
			if (array[i] > array[j])
			{
				int temp = array[i];

				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
				switched = 1;
			}
			j++;
		}
	} while (switched);
}
