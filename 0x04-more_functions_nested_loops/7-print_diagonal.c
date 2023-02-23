#include "main.h"

/**
 * print_diagonal - draws a straight line and end in newline
 * @n: number of times the character '\n' should be printed
 * Return: diagonal if n > 0 else '\n'
 */

void print_diagonal(int n)
{
	int diagonal;

	for (diagonal = 0; diagonal < n; diagonal++)
	{
		_putchar('\');
	}
	_putchar('\n');
}
