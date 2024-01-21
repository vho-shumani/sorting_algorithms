#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: array to arrange.
 * @size: size of array.
*/

void selection_sort(int *array, size_t size)
{
    size_t i, j, x;
    int min;

    for (i = 0; i < size; i++)
    {
        x = i;
        min = array[i];
        
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                array[i] = array[j];
                x = j;
            }
        }
        if (x != i && i != size - 1)
        {
            array[x] = min;
            print_array(array, size);
        }
    }
}
