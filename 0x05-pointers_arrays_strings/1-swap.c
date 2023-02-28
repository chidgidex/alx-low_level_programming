#include<stdio.h>

/**
 * swap_int - swaps the value of two integers.
 * @: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return : nothing
 */
void swap_int(int *a, int *b)
/* The function that swap the value of two integer. */
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
