#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except
 * 2 and 4 followed by a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		if (d != 50 && d != 52)
		{
			_putchar(d);
		}
	}
	_putchar('\n');
}
