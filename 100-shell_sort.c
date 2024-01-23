#include "sort.h"
/**
 * swap - switches two elements in array.
 * @array: array.
 * @index_1: index of first element.
 * @index_2: index of second element. 
*/
void swap(int *a, int index_1, int index_2)
{
	int x;
	x = a[index_1];
	a[index_1] = a[index_2];
	a[index_2] = x;
}
/**
 * shell_sort: sorts array using shell sorting.
 * @array: array.
 * @size: size of array. 
*/
void shell_sort(int *array, size_t size)
{
	int k = 1, i, x, j;

	if (size < 2)
		return;
	while (k < (int)size)
	{
		k = k * 3 + 1;
	}
	k = (k - 1) / 3;
	while (k > 0)
	{
		for (x = 0, i = k; i < (int)size && x < (int)size; i++, x++)
		{
			if (array[x] > array[i])
			{
				swap(array, x, i);
				j = x;
				while (array[j - k] > array[j])
				{
					swap(array, j - k, j);
					j--;
				}
			}
		}
		print_array(array, size);
		k = (k - 1) / 3;
	}
}
