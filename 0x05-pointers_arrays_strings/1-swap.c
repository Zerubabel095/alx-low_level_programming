#include <stdio.h>

/**
 * swap_int - swaps the values of integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

