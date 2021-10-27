void selection_sort(int *array, size_t size)
{
	size_t a, b, now, tmp;

	for (a = 0; a < size - 1; a++)
	{
		now = a;
		for (b = a + 1; b < size; b++)
			if (array[b] < array[now])
				now = b;

		if (now != a)
		{
			tmp = array[i];
			array[i] = array[position];
			array[position] = tmp;
			print_array(array, size);
		}
	}
}
