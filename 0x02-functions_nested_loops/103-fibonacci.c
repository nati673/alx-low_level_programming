#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    long int f1 = 1, f2 = 2, fn, sum = 0;

    while (f1 <= 4000000)
    {
        if (f1 % 2 == 0)
            sum += f1;

        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    printf("%ld\n", sum);

    return (0);
}
