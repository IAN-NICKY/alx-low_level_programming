#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%c", n + '0');
	}

	printf('\n');

	return (0);
}
