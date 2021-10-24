#include "sort.h"

/**
 * selection_sort - function sorts an array in ascending using the selection sort.
 * @array: input array
 * @size: size of array.
 */

void selection_sort(int *array, size_t size)
{
int min,temp;

if(array == NULL || size < 2)
return;
     for(size_t i = 0 ; i < size - 1 ; i++)
     {
         min = i;                 
         for(size_t j = i+1 ; j < size ; j++)
             if(t[j] < t[min])
                min = j;
         if(min != i)
         {
            temp = t[i];
            t[i] = t[min];
            t[min] = temp;          
         }
     }

}
