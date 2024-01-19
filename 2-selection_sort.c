#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t y;
	size_t  x;
	size_t min_index;
	int temp;

	if (array == NULL || size <= 1)
		return;

	for (y = 0; y < size - 1; y++)
	{
		min_index = y;

		for (x = y + 1; x < size; x++)
		{
			if (array[x] < array[min_index])
				min_index = x;
		}

		if (min_index != y)
		{
			temp = array[y];
			array[y] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
