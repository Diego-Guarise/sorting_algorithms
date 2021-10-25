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

	if (array == NULL || size == 1)
		return;

	for (i = 1; i < size - 1; i++)
	{
		for (x = 0; i < size - 1; x++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
