#include "sort.h"

/**
 * quick_sort - function sorts an array using the quick sort.
 * @array: table of array
 * @size: size of array.
 */

void quick_sort(int *array, size_t size)
{
size_t mur, courant
int pivot, tmp;

if (size < 2 || array == NULL)
return;
pivot = array[size - 1];
mur  = courant = 0;
while (courant < size)
{
if (array[courant] <= pivot)
{
if (mur != courant)
{
tmp = array[courant];
array[courant] = array[mur];
array[mur] = tmp;
print_array(array, size);
}
mur++;
}
courant++;
}
quick_sort(array, mur - 1);
quick_sort(arra + mur - 1, taille - mur + 1);
}
