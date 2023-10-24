#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* 0-bubble_sort.c */
void bubble_sort(int *array, size_t size);

/* 1-insertion_sort_list.c */
void insertion_sort_list(listint_t **list);

/* 2-selection_sort.c */
void selection_sort(int *array, size_t size);

/* 3-quick_sort.c */
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
size_t partition(int array[], size_t size);
void print_sort(int array[], size_t size, int init);

/* 100-shell_sort.c */
void shell_sort(int *array, size_t size);
void swap_in_array(int *array, int item1, int item2);

/* 101-cocktail_sort_list.c */
void cocktail_sort_list(listint_t **list);
listint_t *swap_node(listint_t *node, listint_t **list);

/* 102-counting_sort.c */
void counting_sort(int *array, size_t size);
void *_calloc(unsigned int nmemb, unsigned int size);

/* 103-merge_sort.c */
void merge_sort(int *array, size_t size);
void mergesort(int *array, int *tmp, int start, int end);
void merge(int *arr, int *tmp, int start, int mid, int end);

/* 104-heap_sort.c */
void heap_sort(int *array, size_t size);
void maxHeapify(int *array, size_t size, int idx, size_t n);

/* 105-radix_sort.c */
void radix_sort(int *array, size_t size);
void countSort(int *arr, size_t n, int exp, int *output);

/* 106-bitonic_sort.c */
void bitonic_sort(int *array, size_t size);

/* 107-quick_sort_hoare.c */
int hoare_partition(int *array, int first, int last, int size);


#endif
