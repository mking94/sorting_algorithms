#include "sort.h"

/**
 * selection_sort - function sorts an array in ascending using the selection sort.
 * @array: input array.
 * @size: size of array.
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min;

if(array == NULL || size < 2)
return;
for(i = 0 ; i < size - 1 ; i++)
{
min = i;
for(j = i + 1 ; j < size ; j++)
if(array[j] < array[min])
min = j;
if(min != i)
{
array[i] = array[i] + array[min];
array[min] = array[i] - array[min];
array[min] = array[i] - array[min];
print_array(array, size);
}
}
}
