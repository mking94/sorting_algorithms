#include "sort.h"
/**
 * bubble_sort - function sorts an array in ascending using the Bubble sort.
 * @array: table of array
 * @size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
int swap = 1, passage = 0;
size_t i;

if(array == NULL || size < 2)
return;
while(swap == 1){
swap = 0;
for(i = 0; i < size - passage; i++)
{
if(array[i] > array[i + 1])
{
swap = 1;
array[i] = array[i] + array[i + 1];
array[i + 1] = array[i] - array[i + 1];
array[i] = array[i] - array[i + 1];
print_array(array, size);
}
}
passage++;
}
}
