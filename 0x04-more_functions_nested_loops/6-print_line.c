#include "main.h"

/**
 * print_line - draws a straight line and end in newline
 * @n: number of times the character '_' should be printed
 * Return: line
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
