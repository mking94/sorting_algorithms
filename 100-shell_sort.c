#include "sort.h"
/**
 * shell_sort - sorts an array of integers using the shell sort
 * @array: input sort
 * @size: size of the array to sort
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 0, gap = 1, j;
	int temp;

	if (!array || size <= 1)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
