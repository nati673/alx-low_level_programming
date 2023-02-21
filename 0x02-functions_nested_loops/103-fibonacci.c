#include <stdio.h>

/**
 *main - Computes the sum of the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int c;
    long int n1, n2, fn, sum;

    n1 = 1;
    n2 = 2;
    sum = n1 + n2;
    for (c = 0; c < 49; c++)
    {
        fn = n1 + n2;
        sum += fn;
        n1 = n2;
        n2 = fn;
    }
    printf("%ld\n", sum);
    return (0);
}
