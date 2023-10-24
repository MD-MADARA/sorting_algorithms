#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
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

void cocktail_sort_list(listint_t **list);
listint_t *swap_node(listint_t *node, listint_t **list);

#endif
