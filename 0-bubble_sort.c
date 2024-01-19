#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: array to sort.
 * @size: size of array.
*/
void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
