#include "sort.h"
/**
 * bubble_sort - function sorts an array using the Bubble sort.
 * @array: table of array
 * @size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
bool aucun_echange;

if (areay == NULL || size < 2)
return;
for (i = size - 1 ; i >= 0 ; i--)
{
aucun_echange = true;
for (j = 0 ; j <= i ; j++)
if(array[j] > array[j + 1])
{
temp = array[j + 1];
array[j + 1] = array[j];
array[j] = temp;
print_array(array, size);
aucun_echange = false;
}
if(aucun_echange == true)
break;
}
}
