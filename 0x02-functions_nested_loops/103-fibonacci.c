#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a = 1, b = 2, sum = 2;  /* initialize the first two terms and the sum */

    while (b <= 4000000)  /* continue until the terms exceed 4,000,000 */
    {
        int c = a + b;  /* calculate the next term */

        if (c % 2 == 0)  /* check if the term is even */
            sum += c;   /* add the term to the sum if it is even */

        a = b;          /* update the values of a and b for the next iteration */
        b = c;
    }

    printf("%d\n", sum);  /* print the sum */
    return (0);
}

