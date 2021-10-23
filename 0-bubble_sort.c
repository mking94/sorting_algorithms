#include "sort.h"
/**
 * bubble_sort - function sorts an array in ascending using the Bubble sort.
 * @array: table of array
 * @size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
int swap = 1, i, passage = 0;
while(swap == 1){
swap = 0;
for(i = 0; i < size - passage; i++)
{
if(array[i] > array[i + 1])
{
swap = 1;
/* swap between array[i] and array[i+1] */
array[i] = array[i] + array[i + 1];
array[i + 1] = array[i] - array[i + 1];
array[i] = array[i] - array[i + 1];
}
}
passage++;
}
}
