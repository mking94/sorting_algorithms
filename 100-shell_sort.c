#include "sort.h"
/**
 * shell_sort - sorts an array of integers using the shell sort
 * @array: input sort
 * @size: size of the array to sort
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
for (size_t gap = size / 2; gap > 0; gap /= 2)
{
for (size_t i = gap; i < size; i += 1)
{
int temp = array[i];
size_t j;            
for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
{
array[j] = array[j - gap];
}
array[j] = temp;
print_array(array, size);
}
}
}
