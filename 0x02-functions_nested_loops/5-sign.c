#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: number to be checked for sign
 *
 * Return: 1 if greater than zero,0 if zero -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
