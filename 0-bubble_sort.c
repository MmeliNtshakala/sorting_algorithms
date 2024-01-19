#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array that will be sorted
 * @size: array size
 * Return: 0.
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, x;

	for (index = 0; index < size; index++)
	{
		for (x = 0; x < (size - 1 - index); x++)
		{
			if (array[x] > array[x + 1])
			{
				int temp = array[x];

				array[x] = array[x + 1];
				array[x + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
