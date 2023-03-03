#include <stdio.h>

/* Declare the print_number function */
void print_number(int n);

int main(void)
{
    /* Call the print_number function */
    print_number(0);
    /* Print a newline character */
    putchar('\n');
    return 0;
}

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
    unsigned int n1;

    n1 = n;
    if (n < 0)
    {
        putchar('-');
        n1 = -n;
    }
    if (n1 / 10 != 0)
    {
        print_number(n1 / 10);
    }
    putchar((n1 % 10) + '0');
}
