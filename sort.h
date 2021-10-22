#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>


void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void swap(int *xp, int *yp);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);


#endif
