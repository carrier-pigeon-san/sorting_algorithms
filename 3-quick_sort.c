#include "sort.h"
/**
 * split - divides an array into two arrays, each on either side of a chosen
 * pivot
 * @array: pointer to array to be sorted
 * @size: length of whole array
 * @first: first index of the array
 * @last: last index of the arrray
 * Return: index to pivot
 */
int split(int *array, size_t size, int first, int last)
{
	int j, temp, pivot = array[last];
	int i = first - 1;

	for (j = first; j < last; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	i++;
	if (pivot != array[i])
	{
		array[last] = array[i];
		array[i] = pivot;
		print_array(array, size);
	}
	return (i);
}
/**
 * _quick_sort - recursively sorts elements of an integer array in ascending
 * order
 * @array: pointer to array to be sorted
 * @size: length of whole array
 * @first: index to the first element of the array
 * @last: index to the last element of the array
 */
void _quick_sort(int *array, size_t size, int first, int last)
{
	if (first < last)
	{
		int pivot = split(array, size, first, last);

		_quick_sort(array, size, first, pivot - 1);
		_quick_sort(array, size, pivot + 1, last);
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: given array to be sorted
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	_quick_sort(array, size, 0, size - 1);
}
