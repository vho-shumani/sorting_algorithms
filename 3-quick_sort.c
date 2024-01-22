#include "sort.h"
void partition(int *array, int start, int end, size_t size)
{
    int pivot;
    int num, i, j;

    if (start >= end)
        return;
    pivot = array[end];
    j = start;
    for (i = start; i < end; i++)
    {
        if (array[i] <= pivot)
        {
            num = array[i];
            array[i] = array[j];
            array[j] = num;
            if (j != i)
                print_array(array, size);
            j++;
        }
    }
    array[end] = array[j];
    array[j] = pivot;
    if (j != end)
        print_array(array, size);
    partition(array, start, j - 1, size);
    partition(array, j + 1, end, size);
    return;
}

void quick_sort(int *array, size_t size)
{
    partition(array, 0, size - 1, size);
}