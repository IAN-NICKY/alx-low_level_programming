#include "main.h"

/**
 * _strlen - Prints length of a string
 * @s: - string to be checked for length
 * Return: length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
