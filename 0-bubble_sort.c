#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_ints(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)

	int i, j;
	size = n

	for (i = 0; i < n-1; i++)
	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
	if (arr[j] > arr[j+1])
	swap_ints(&arr[j], &arr[j+1]);
	}
