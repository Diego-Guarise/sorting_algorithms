#include "sort.h"
/**
  * bubble_sort - Write a function that sorts an array of
  * integers in ascending order using the Bubble sort algorithm
  * @array: array int.
  * @size: size_t
  */

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, x;

	if (array == NULL || size < 2)
		return;

	for (i = 1; i < size; i++)
	{
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
