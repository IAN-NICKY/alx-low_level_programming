#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: - First number to be swapped
 * @b: - second number to be swapped
 * Return: swapped integers a is now b b is a
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
