#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
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
 * selection_sort - sort an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mini;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		mini = array + i;
		for (j = i + 1; j < size; j++)
			mini = (array[j] < *mini) ? (array + j) : mini;

		if ((array + i) != mini)
		{
			swap_ints(array + i, mini);
			print_array(array, size);
		}
	}
}
