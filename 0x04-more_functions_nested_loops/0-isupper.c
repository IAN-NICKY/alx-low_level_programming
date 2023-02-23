#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: character to be checked for uppercase
 *
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
