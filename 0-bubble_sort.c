#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array to be numbered
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    size_t i, j;
    int num;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                num = array[j];
                array[j] = array[j + 1];
                array[j + 1] = num;
                print_array(array, size);
            }
        }
    }
}
