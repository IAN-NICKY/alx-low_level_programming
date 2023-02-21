#include "main.h"

/**
 * _abs -  Computes the absolute value of an integer
 *
 * @n: Integer to be converted to its absolute value
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
