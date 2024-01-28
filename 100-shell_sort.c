#include "sort.h"
/**
 * knuth_gap - returns the largest gap in the knuth sequence for
 * the shell sort algorithm to sort an array of integers of a given size
 * @size: length of array to be sorted
 *
 * Return: largest gap in the knuth sequence
 */
int knuth_gap(int size)
{
	int n;

	for (n = 1; n < size; n = n * 3 + 1)
		;
	n--;
	n /= 3;

	return (n);
}
/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: pointer to array of integers to be sorted
 * @size: length of the given array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = knuth_gap(size);

	while (gap >= 1)
	{
		size_t end;

		for (i = 0, j = i + gap; j < size; i++, j++)
		{
			end = j;
			for (; j >= gap && array[i] > array[j]; i -= gap, j -= gap)
			{
				int temp = array[i];

				array[i] = array[j];
				array[j] = temp;
				/*
				*if (j % gap == 0 && j > gap)
				*{
				*	i -= gap;
				*	j -= gap;
				*}
				*/
			}
			if (j != end)
			{
				j = end;
				i = j - gap;
			}
		}
		gap--;
		gap /= 3;
		print_array(array, size);
	}
}
