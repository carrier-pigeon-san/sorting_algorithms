#include "sort.h"
/**
 * split - divides an array into two arrays, each on either side of a chosen
 * pivot
 * @first_index: first index of the array
 * @last_index: last index of the arrray
 * Return: index to pivot
 */
int split(int *array, int first_index, int last_index)
{
	int temp, pivot = array[last_index];
	int i = first_index - 1;

	for (j = first_index ; j < last_index; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	i++;
	array[last_element] = array[i];
	array[i] = pivot;
	return i;
}
/**
 * _quick_sort - recursively sorts elements of an integer array in ascending
 * order
 * @array: pointer to array to be sorted
 * @first_index: index to the first element of the array
 * @last_index: index to the last element of the array
 */
void _quick_sort(int *array, int first_element, int last_element)
{
	if (first_element)
}
/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: given array to be sorted
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
	if ()
}
