#include "sort.h"
/**
 * selection_sort - function sorts an array in ascending using the selection sort.
 * @array: input array
 * @size: size of array.
 */

void selection_sort(int *array, size_t size)
{
size_t current, smaller, j;
for (current = 0; en_cours < size - 1; current++)
{
smaller = current;
for (j = current + 1; j < size; j++)
{
if (array[j] > array[smaller])
{
smaller = j;
array[current] = array[current] + array[smaller];
array[smaller] = array[current] - array[smaller];
array[current] = array[current] - array[smaller];
}
}       
}
}
