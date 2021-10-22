#include "sort.h"
/**
  * bubble_sort - Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm
  * @array: array int
  * @size: size_t
  */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
            i = -1;
		}
        print_array(array, size);
	}
}